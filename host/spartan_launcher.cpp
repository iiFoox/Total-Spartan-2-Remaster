#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include "spartan_launcher.hpp"

#include <windows.h>
#include <windowsx.h>
#include <dwmapi.h>
#include <shellapi.h>

#include <algorithm>
#include <array>
#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>

namespace fs = std::filesystem;

namespace ps2::spartan_launcher {
namespace {

constexpr int kIdIcon = 1;
constexpr int kIdBanner = 101;

constexpr int kClientW = 980, kClientH = 796;
constexpr int kBannerH = 226;
constexpr int kCardTop = 242, kCardHeader = 38, kRowH = 56, kRows = 7;
constexpr int kCardBottom = kCardTop + kCardHeader + kRows * kRowH + 8;
constexpr int kMargin = 24;
constexpr int kCardW = (kClientW - 3 * kMargin) / 2;
constexpr int kButtonsTop = kCardBottom + 16, kButtonH = 46;

constexpr COLORREF kBg        = RGB(13, 14, 18);
constexpr COLORREF kCard      = RGB(22, 24, 30);
constexpr COLORREF kCardEdge  = RGB(44, 47, 58);
constexpr COLORREF kPill      = RGB(32, 35, 44);
constexpr COLORREF kPillHover = RGB(44, 48, 60);
constexpr COLORREF kPillEdge  = RGB(56, 60, 74);
constexpr COLORREF kGold      = RGB(214, 164, 72);
constexpr COLORREF kGoldLight = RGB(244, 204, 112);
constexpr COLORREF kGoldDark  = RGB(150, 108, 40);
constexpr COLORREF kText      = RGB(236, 238, 242);
constexpr COLORREF kMuted     = RGB(150, 156, 170);
constexpr COLORREF kOnGold    = RGB(20, 16, 10);

// One setting: a row of pills, one of which is chosen. Saved in launcher.ini under `key`.
struct Option {
    const wchar_t *key;
    const wchar_t *label;
    std::vector<const wchar_t *> choices;
    std::vector<const wchar_t *> hints;  // one per choice, shown at the bottom while the pointer is on it
    int fallback;
    int column;  // 0 left card, 1 right card
    int row;
    int value = 0;
};

enum OptionId { kOptScale, kOptWindow, kOptMode, kOptAspect, kOptCutsceneBars, kOptBackend, kOptVolume,
                kOptColor, kOptFilter, kOptEdges, kOptScreenFx, kOptHud, kOptTextures, kOptReverb };

enum Button { kBtnNone = -1, kBtnControls = 0, kBtnSaves = 1, kBtnPlay = 2 };

struct State {
    fs::path folder;
    fs::path ini_path;
    HWND hwnd = nullptr;
    HBITMAP banner = nullptr;
    HFONT f_title = nullptr, f_sub = nullptr, f_head = nullptr, f_label = nullptr, f_pill = nullptr, f_btn = nullptr, f_small = nullptr;
    std::vector<Option> options;
    int hover_option = -1, hover_choice = -1;
    int hover_button = kBtnNone, pressed_button = kBtnNone;
    bool tracking = false;
    Choice choice{};
};

State *g_st = nullptr;

std::vector<Option> make_options() {
    return {
        {L"Scale", L"RESOLUÇÃO 3D", {L"1×", L"2×", L"3×", L"4×", L"5×", L"6×"},
         {L"Nativo do PS2 (448p): o mais leve.", L"2× ≈ 900p: leve e já nítido.", L"3× ≈ 1344p: ideal para monitor 2K (recomendado).",
          L"4× ≈ 1800p: supersampling em 1440p, bordas muito limpas.", L"5× ≈ 4K: para monitor 4K.", L"6×: 4K+ extremo, pesado."}, 2, 0, 0},
        {L"Resolution", L"JANELA", {L"Auto", L"720p", L"1080p", L"1440p", L"4K"},
         {L"Usa o tamanho do monitor.", L"Janela 1280 × 720.", L"Janela 1920 × 1080.", L"Janela 2560 × 1440.", L"Janela 3840 × 2160."}, 0, 0, 1},
        {L"Fullscreen", L"MODO DE TELA", {L"Tela cheia", L"Janela"},
         {L"Começa em tela cheia (F11 alterna durante o jogo).", L"Começa em janela (F11 alterna durante o jogo)."}, 0, 0, 2},
        {L"Widescreen", L"PROPORÇÃO", {L"4:3 original", L"16:9 real"},
         {L"Imagem original do PS2, com faixas laterais.", L"Campo de visão 16:9 real sem bugs nas bordas nem nos quadrados da direita."}, 1, 0, 3},
        {L"CutsceneBars", L"CUTSCENES 16:9", {L"Cinema Limpo", L"Tela Cheia"},
         {L"Barras pretas cinematográficas alinhadas de ponta a ponta em 16:9 (sem cantos abertos).",
          L"Remove as tarjas pretas nas cutscenes para aproveitar os 16:9 inteiros (recomendado)."}, 1, 0, 4},
        {L"Backend", L"RENDERIZADOR", {L"Direct3D 12", L"Vulkan"},
         {L"Recomendado no Windows (compilador DXC).", L"Alternativa caso o Direct3D 12 dê problema no seu driver."}, 0, 0, 5},
        {L"Volume", L"VOLUME", {L"Mudo", L"25%", L"50%", L"75%", L"100%"},
         {L"Sem som.", L"Volume geral em 25%.", L"Volume geral em 50%.", L"Volume geral em 75%.", L"Volume original do jogo."}, 4, 0, 6},

        {L"Color", L"CORES", {L"Original", L"Leve", L"Remaster", L"Vivas", L"2.0 ACES"},
         {L"Cores exatamente como no PS2.", L"Um pouco mais de contraste e cor.", L"Contraste rico e pretos profundos.",
          L"Contraste e saturação fortes.", L"Remaster 2.0: tone mapping ACES Filmic com brilho bronze/ouro (recomendado)."}, 4, 1, 0},
        {L"Filter", L"FILTRO DE IMAGEM", {L"Nítido", L"Suave", L"Pixel"},
         {L"Ampliação bicúbica + nitidez adaptativa (CAS) (recomendado).", L"Mistura suave, parecida com uma TV.", L"Pixels duros, como um emulador sem filtro."}, 0, 1, 1},
        {L"Edges", L"SUAVIZAR SERRILHADO", {L"Ligado", L"Desligado"},
         {L"Suaviza as bordas em escada na tela final.", L"Sem suavização de bordas."}, 0, 1, 2},
        {L"ScreenFx", L"CINEMA E BORDAS", {L"Padrão", L"Vinheta + Crop", L"Só Crop"},
         {L"Sem vinheta nem corte de bordas.", L"Vinheta cinematográfica sutil + corte de 1px/4px de ruído de borda do PS2 (recomendado).",
          L"Apenas remove as linhas de overscan nas bordas do PS2."}, 1, 1, 3},
        {L"Sharp2D", L"HUD E LEGENDAS", {L"Mais nítido", L"Nítido", L"Suave"},
         {L"Textos e ícones 2D com o máximo de nitidez (recomendado).", L"Textos e ícones nítidos.", L"Textos e ícones com filtro suave."}, 0, 1, 4},
        {L"Textures", L"TEXTURAS HD 4×", {L"Remaster 2.0", L"Pack puro", L"Desligadas"},
         {L"Artes/Menus/HUD redesenhados 2.0 + detalhes 4× fiéis do El Jefe (recomendado).",
          L"Artes 2.0 + pack El Jefe como pintado pela IA.", L"Apenas texturas originais do disco."}, 0, 1, 5},
        {L"Reverb", L"REVERBERAÇÃO", {L"Ligada", L"Desligada"},
         {L"Eco de ambiente do chip de som do PS2, como no console.", L"Som seco, sem eco de ambiente."}, 0, 1, 6},
    };
}

int read_num(const State &s, const wchar_t *key, int fallback) {
    return static_cast<int>(GetPrivateProfileIntW(L"Video", key, fallback, s.ini_path.c_str()));
}
void write_num(const State &s, const wchar_t *key, int val) {
    std::error_code ec;
    fs::create_directories(s.ini_path.parent_path(), ec);
    const std::wstring txt = std::to_wstring(val);
    WritePrivateProfileStringW(L"Video", key, txt.c_str(), s.ini_path.c_str());
}

void set_env_str(const wchar_t *name, const wchar_t *val) {
    SetEnvironmentVariableW(name, val);
    _wputenv_s(name, val ? val : L"");
}
void set_env_int(const wchar_t *name, int v) {
    const std::wstring s = std::to_wstring(v);
    set_env_str(name, s.c_str());
}

bool is_key(const Option &o, const wchar_t *key) { return std::wstring(o.key) == key; }

// Scale, Fullscreen and Widescreen keep the meaning the first launcher gave them in launcher.ini (a number of times,
// 1 = on); the rest is the index of the chosen pill.
void load_settings(State &s) {
    s.options = make_options();
    const bool has_hd = fs::is_directory(s.folder / "textures" / "eljefe");
    for (Option &o : s.options) {
        int v = read_num(s, o.key, -1);
        if (is_key(o, L"Scale")) v = v < 0 ? o.fallback : v - 1;
        else if (is_key(o, L"Fullscreen")) v = v < 0 ? o.fallback : (v ? 0 : 1);
        else if (is_key(o, L"Textures") && v < 0) v = has_hd ? 0 : 2;
        else if (v < 0) v = o.fallback;
        o.value = std::clamp(v, 0, static_cast<int>(o.choices.size()) - 1);
    }
}

void save_settings(const State &s) {
    for (const Option &o : s.options) {
        int v = o.value;
        if (is_key(o, L"Scale")) v += 1;
        else if (is_key(o, L"Fullscreen")) v = v == 0 ? 1 : 0;
        write_num(s, o.key, v);
    }
}

void apply_and_start(State &s) {
    save_settings(s);
    const auto &o = s.options;
    const int res = o[kOptWindow].value;

    set_env_int(L"PS2_SCALE", o[kOptScale].value + 1);
    set_env_int(L"PS2_SHARP_2D", 2 - o[kOptHud].value);
    set_env_int(L"PS2_SPU2_KON_LATE", 1);
    set_env_int(L"PS2_RECORD", 0);  // no pad recording (a developer aid that keeps a memory card copy per session in saves/states)
    set_env_str(L"PS2_GPU_BACKEND", o[kOptBackend].value == 1 ? L"vulkan" : L"dx12");
    set_env_str(L"PS2_WINDOW_TITLE", L"Total Spartan 2 — Remaster 2.0");
    set_env_int(L"PS2_COLOR", o[kOptColor].value);
    set_env_str(L"PS2_CUTSCENE_BARS", o[kOptCutsceneBars].value == 1 ? L"off" : L"full");
    set_env_int(L"PS2_VIGNETTE", o[kOptScreenFx].value == 1 ? 1 : 0);
    set_env_int(L"PS2_OVERSCAN_CROP", o[kOptScreenFx].value >= 1 ? 1 : 0);
    // the window's picture looks (keymap.cpp): 4 sharp, 2 soft, 0 crisp, +1 with edge smoothing
    static constexpr int kLooks[3] = {4, 2, 0};
    set_env_int(L"PS2_LOOK", kLooks[o[kOptFilter].value] + (o[kOptEdges].value == 0 ? 1 : 0));
    static constexpr int kVolumes[5] = {0, 25, 50, 75, 100};
    set_env_int(L"PS2_VOLUME", kVolumes[o[kOptVolume].value]);
    set_env_str(L"PS2_SPU2_REVERB", o[kOptReverb].value == 0 ? nullptr : L"0");

    const std::array<std::pair<int, int>, 5> sizes{{{0, 0}, {1280, 720}, {1920, 1080}, {2560, 1440}, {3840, 2160}}};
    const bool fits = res > 0 && res < static_cast<int>(sizes.size()) && sizes[res].first <= GetSystemMetrics(SM_CXSCREEN) &&
                      sizes[res].second <= GetSystemMetrics(SM_CYSCREEN);
    if (fits) {
        set_env_int(L"PS2_WINDOW_WIDTH", sizes[res].first);
        set_env_int(L"PS2_WINDOW_HEIGHT", sizes[res].second);
    } else {
        set_env_str(L"PS2_WINDOW_WIDTH", nullptr);
        set_env_str(L"PS2_WINDOW_HEIGHT", nullptr);
    }

    // Remaster 2.0 layered texture packs: base El Jefe 4x + custom redesigned Remaster 2.0 art/UI/HUD overrides on top!
    const fs::path pack = s.folder / "textures" / "eljefe";
    const fs::path custom_pack = s.folder / "textures" / "remaster2";
    const int tex = o[kOptTextures].value;
    set_env_str(L"PS2_TEX_PACK", tex < 2 && fs::is_directory(pack) ? pack.c_str() : nullptr);
    set_env_str(L"PS2_TEX_PACK_CUSTOM", tex < 2 && fs::is_directory(custom_pack) ? custom_pack.c_str() : nullptr);
    set_env_str(L"PS2_TEX_PACK_MODE", tex == 1 ? L"pure" : nullptr);
    set_env_str(L"PS2_TEX_OVERRIDES", nullptr);

    s.choice.start = true;
    s.choice.fullscreen = o[kOptMode].value == 0;
    s.choice.widescreen = o[kOptAspect].value == 1;
    DestroyWindow(s.hwnd);
}

// --- layout ---

RECT card_rect(int column) {
    const int x = kMargin + column * (kCardW + kMargin);
    return {x, kCardTop, x + kCardW, kCardBottom};
}

RECT pill_rect(const Option &o, int i) {
    const RECT c = card_rect(o.column);
    const int left = c.left + 20, right = c.right - 20;
    const int gap = 6, n = static_cast<int>(o.choices.size());
    const int w = (right - left - gap * (n - 1)) / n;
    const int y = c.top + kCardHeader + o.row * kRowH + 22;
    return {left + i * (w + gap), y, left + i * (w + gap) + w, y + 30};
}

RECT button_rect(int b) {
    const int y = kButtonsTop;
    switch (b) {
    case kBtnControls: return {kMargin, y, kMargin + 220, y + kButtonH};
    case kBtnSaves: return {kMargin + 232, y, kMargin + 232 + 200, y + kButtonH};
    default: return {kClientW - kMargin - 300, y, kClientW - kMargin, y + kButtonH};
    }
}

bool inside(const RECT &r, int x, int y) { return x >= r.left && x < r.right && y >= r.top && y < r.bottom; }

// --- drawing (into a 32-bit top-down DIB, then one copy to the window: no flicker) ---

void fill_round(HDC hdc, const RECT &r, COLORREF fill, COLORREF edge, int radius) {
    HBRUSH br = CreateSolidBrush(fill);
    HPEN pen = CreatePen(PS_SOLID, 1, edge);
    HGDIOBJ ob = SelectObject(hdc, br), op = SelectObject(hdc, pen);
    RoundRect(hdc, r.left, r.top, r.right, r.bottom, radius, radius);
    SelectObject(hdc, ob);
    SelectObject(hdc, op);
    DeleteObject(br);
    DeleteObject(pen);
}

void fill_rect(HDC hdc, const RECT &r, COLORREF c) {
    HBRUSH br = CreateSolidBrush(c);
    FillRect(hdc, &r, br);
    DeleteObject(br);
}

void text(HDC hdc, HFONT f, COLORREF c, const wchar_t *t, RECT r, UINT flags) {
    SelectObject(hdc, f);
    SetTextColor(hdc, c);
    DrawTextW(hdc, t, -1, &r, flags);
}

COLORREF blend(COLORREF a, COLORREF b, int t, int n) {
    return RGB((GetRValue(a) * (n - t) + GetRValue(b) * t) / n, (GetGValue(a) * (n - t) + GetGValue(b) * t) / n,
               (GetBValue(a) * (n - t) + GetBValue(b) * t) / n);
}

void draw_banner(State &s, HDC hdc, std::uint32_t *pixels) {
    if (s.banner) {
        HDC mem = CreateCompatibleDC(hdc);
        HGDIOBJ old = SelectObject(mem, s.banner);
        BITMAP bm{};
        GetObjectW(s.banner, sizeof bm, &bm);
        SetStretchBltMode(hdc, HALFTONE);
        SetBrushOrgEx(hdc, 0, 0, nullptr);
        // fill the width, crop the height around the middle of the art
        const int src_h = std::min<int>(bm.bmHeight, bm.bmWidth * kBannerH / kClientW);
        StretchBlt(hdc, 0, 0, kClientW, kBannerH, mem, 0, (bm.bmHeight - src_h) / 2, bm.bmWidth, src_h, SRCCOPY);
        SelectObject(mem, old);
        DeleteDC(mem);
    } else {
        fill_rect(hdc, {0, 0, kClientW, kBannerH}, RGB(40, 28, 16));
    }
    GdiFlush();
    // darken the lower part of the art into the background, so the title sits on a dark band
    constexpr int kFade = 120;
    const int br = GetRValue(kBg), bgc = GetGValue(kBg), bb = GetBValue(kBg);
    for (int y = kBannerH - kFade; y < kBannerH; ++y) {
        const int a = (y - (kBannerH - kFade)) * 235 / kFade + 20;  // 20..255 of the background over the art
        std::uint32_t *row = pixels + y * kClientW;
        for (int x = 0; x < kClientW; ++x) {
            const std::uint32_t p = row[x];
            const int r = ((p >> 16) & 255) * (255 - a) / 255 + br * a / 255;
            const int g = ((p >> 8) & 255) * (255 - a) / 255 + bgc * a / 255;
            const int b = (p & 255) * (255 - a) / 255 + bb * a / 255;
            row[x] = (static_cast<std::uint32_t>(r) << 16) | (static_cast<std::uint32_t>(g) << 8) | static_cast<std::uint32_t>(b);
        }
    }
    fill_rect(hdc, {0, kBannerH - 2, kClientW, kBannerH}, kGoldDark);

    SetBkMode(hdc, TRANSPARENT);
    text(hdc, s.f_title, RGB(0, 0, 0), L"TOTAL SPARTAN 2", {kMargin + 2, 122, kClientW, 174}, DT_LEFT | DT_SINGLELINE);
    text(hdc, s.f_title, kGoldLight, L"TOTAL SPARTAN 2", {kMargin, 120, kClientW, 172}, DT_LEFT | DT_SINGLELINE);
    text(hdc, s.f_sub, kText, L"REMASTER 2.0   ·   PT-BR   ·   16:9 REAL   ·   ACES FILMIC   ·   TEXTURAS 4×   ·   60 FPS",
         {kMargin + 2, 176, kClientW, 200}, DT_LEFT | DT_SINGLELINE);
}

void draw_card(State &s, HDC hdc, int column, const wchar_t *title) {
    const RECT c = card_rect(column);
    fill_round(hdc, c, kCard, kCardEdge, 12);
    fill_rect(hdc, {c.left + 20, c.top + 16, c.left + 24, c.top + 32}, kGold);
    text(hdc, s.f_head, kGoldLight, title, {c.left + 32, c.top + 12, c.right - 20, c.top + 36}, DT_LEFT | DT_SINGLELINE | DT_VCENTER);
    for (int i = 0; i < static_cast<int>(s.options.size()); ++i) {
        const Option &o = s.options[i];
        if (o.column != column) continue;
        const int y = c.top + kCardHeader + o.row * kRowH;
        text(hdc, s.f_label, kMuted, o.label, {c.left + 20, y, c.right - 20, y + 20}, DT_LEFT | DT_SINGLELINE | DT_VCENTER);
        for (int k = 0; k < static_cast<int>(o.choices.size()); ++k) {
            const RECT p = pill_rect(o, k);
            const bool on = o.value == k;
            const bool hot = s.hover_option == i && s.hover_choice == k;
            if (on) fill_round(hdc, p, hot ? kGoldLight : kGold, kGoldLight, 8);
            else fill_round(hdc, p, hot ? kPillHover : kPill, hot ? kGoldDark : kPillEdge, 8);
            text(hdc, s.f_pill, on ? kOnGold : (hot ? kText : RGB(200, 204, 214)), o.choices[k], p, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
        }
    }
}

void draw_button(State &s, HDC hdc, int b, const wchar_t *label) {
    RECT r = button_rect(b);
    const bool hot = s.hover_button == b, down = s.pressed_button == b && hot;
    if (b == kBtnPlay) {
        const COLORREF top = hot ? kGoldLight : kGold, bottom = hot ? kGold : kGoldDark;
        fill_round(hdc, r, top, kGoldLight, 8);
        for (int y = r.top + 2; y < r.bottom - 2; ++y)
            fill_rect(hdc, {r.left + 1, y, r.right - 1, y + 1}, blend(top, bottom, y - r.top, r.bottom - r.top));
    } else {
        fill_round(hdc, r, hot ? kPillHover : kPill, hot ? kGoldDark : kPillEdge, 8);
    }
    if (down) OffsetRect(&r, 0, 1);
    text(hdc, s.f_btn, b == kBtnPlay ? kOnGold : kText, label, r, DT_CENTER | DT_SINGLELINE | DT_VCENTER);
}

void paint(State &s, HDC target) {
    BITMAPINFO info{};
    info.bmiHeader.biSize = sizeof info.bmiHeader;
    info.bmiHeader.biWidth = kClientW;
    info.bmiHeader.biHeight = -kClientH;
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    void *bits = nullptr;
    HBITMAP frame = CreateDIBSection(target, &info, DIB_RGB_COLORS, &bits, nullptr, 0);
    if (!frame || !bits) return;
    HDC hdc = CreateCompatibleDC(target);
    HGDIOBJ old = SelectObject(hdc, frame);
    fill_rect(hdc, {0, 0, kClientW, kClientH}, kBg);
    SetBkMode(hdc, TRANSPARENT);

    draw_banner(s, hdc, static_cast<std::uint32_t *>(bits));
    draw_card(s, hdc, 0, L"VÍDEO E ÁUDIO");
    draw_card(s, hdc, 1, L"REMASTER 2.0 E IMAGEM");
    draw_button(s, hdc, kBtnControls, L"CONTROLES E ATALHOS");
    draw_button(s, hdc, kBtnSaves, L"PASTA DE SAVES");
    draw_button(s, hdc, kBtnPlay, L"JOGAR  ▶");

    // the hint for the pill under the pointer, else the general footer
    const wchar_t *hint = L"Enter: jogar   ·   Esc: sair   ·   No jogo: F1 menu rápido, F2 filtro, F5/F8 salvar/carregar estado, F11 tela cheia";
    COLORREF hint_color = kMuted;
    if (s.hover_option >= 0 && s.hover_choice >= 0) {
        const Option &o = s.options[s.hover_option];
        if (s.hover_choice < static_cast<int>(o.hints.size())) hint = o.hints[s.hover_choice], hint_color = kText;
    }
    const int fy = kButtonsTop + kButtonH + 14;
    fill_rect(hdc, {kMargin, fy - 4, kClientW - kMargin, fy - 3}, kCardEdge);
    text(hdc, s.f_small, hint_color, hint, {kMargin, fy, kClientW - kMargin, kClientH - 6}, DT_CENTER | DT_SINGLELINE | DT_VCENTER);

    BitBlt(target, 0, 0, kClientW, kClientH, hdc, 0, 0, SRCCOPY);
    SelectObject(hdc, old);
    DeleteObject(frame);
    DeleteDC(hdc);
}

void open_saves(const State &s) {
    const fs::path saves = s.folder / "saves";
    std::error_code ec;
    fs::create_directories(saves, ec);
    ShellExecuteW(nullptr, L"open", saves.c_str(), nullptr, nullptr, SW_SHOWNORMAL);
}

void show_controls(HWND hwnd) {
    MessageBoxW(hwnd,
        L"Controles Xbox, DualShock/DualSense, Switch Pro e genéricos são reconhecidos automaticamente.\n\n"
        L"Teclado (padrão): WASD move, IJKL câmera, Espaço pula, botões do mouse atacam, Esc pausa.\n"
        L"As teclas podem ser trocadas em saves\\keys.ini ou no menu F1.\n\n"
        L"Durante o jogo:\n"
        L"  • F1 (ou Select + Start no controle): menu rápido\n"
        L"  • F2: troca o filtro de imagem\n"
        L"  • F5 / F8: salvar / carregar estado rápido\n"
        L"  • F11: tela cheia / janela\n\n"
        L"Seus saves do jogo ficam em saves\\memcard.ps2.",
        L"Controles e atalhos", MB_OK | MB_ICONINFORMATION);
}

void hit(State &s, int x, int y, int &option, int &choice, int &button) {
    option = choice = -1;
    button = kBtnNone;
    for (int i = 0; i < static_cast<int>(s.options.size()); ++i)
        for (int k = 0; k < static_cast<int>(s.options[i].choices.size()); ++k)
            if (inside(pill_rect(s.options[i], k), x, y)) option = i, choice = k;
    for (int b : {kBtnControls, kBtnSaves, kBtnPlay})
        if (inside(button_rect(b), x, y)) button = b;
}

LRESULT CALLBACK wnd_proc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
    State *s = g_st;
    switch (msg) {
    case WM_CREATE: {
        s->hwnd = hwnd;
        HINSTANCE inst = GetModuleHandleW(nullptr);
        s->banner = static_cast<HBITMAP>(LoadImageW(inst, MAKEINTRESOURCEW(kIdBanner), IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION));
        const auto font = [](int size, int weight, const wchar_t *face) {
            return CreateFontW(-size, 0, 0, 0, weight, FALSE, FALSE, FALSE, DEFAULT_CHARSET, 0, 0, CLEARTYPE_QUALITY, 0, face);
        };
        s->f_title = font(44, FW_BOLD, L"Georgia");
        s->f_sub = font(14, FW_SEMIBOLD, L"Segoe UI");
        s->f_head = font(15, FW_BOLD, L"Segoe UI");
        s->f_label = font(12, FW_SEMIBOLD, L"Segoe UI");
        s->f_pill = font(14, FW_SEMIBOLD, L"Segoe UI");
        s->f_btn = font(16, FW_BOLD, L"Segoe UI");
        s->f_small = font(13, FW_NORMAL, L"Segoe UI");
        const BOOL dark = TRUE;
        DwmSetWindowAttribute(hwnd, 20, &dark, sizeof dark);  // dark title bar on Windows 10/11
        load_settings(*s);
        return 0;
    }
    case WM_ERASEBKGND:
        return 1;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);
        paint(*s, hdc);
        EndPaint(hwnd, &ps);
        return 0;
    }
    case WM_MOUSEMOVE: {
        if (!s->tracking) {
            TRACKMOUSEEVENT t{sizeof t, TME_LEAVE, hwnd, 0};
            s->tracking = TrackMouseEvent(&t) != FALSE;
        }
        int option, choice, button;
        hit(*s, GET_X_LPARAM(lp), GET_Y_LPARAM(lp), option, choice, button);
        if (option != s->hover_option || choice != s->hover_choice || button != s->hover_button) {
            s->hover_option = option, s->hover_choice = choice, s->hover_button = button;
            InvalidateRect(hwnd, nullptr, FALSE);
        }
        return 0;
    }
    case WM_MOUSELEAVE:
        s->tracking = false;
        s->hover_option = s->hover_choice = -1;
        s->hover_button = kBtnNone;
        InvalidateRect(hwnd, nullptr, FALSE);
        return 0;
    case WM_SETCURSOR:
        if (LOWORD(lp) == HTCLIENT) {
            const LPCSTR cursor = (s->hover_option >= 0 || s->hover_button != kBtnNone) ? IDC_HAND : IDC_ARROW;
            SetCursor(LoadCursorW(nullptr, reinterpret_cast<LPCWSTR>(cursor)));
            return TRUE;
        }
        break;
    case WM_LBUTTONDOWN: {
        int option, choice, button;
        hit(*s, GET_X_LPARAM(lp), GET_Y_LPARAM(lp), option, choice, button);
        if (option >= 0) s->options[option].value = choice;
        s->pressed_button = button;
        if (button != kBtnNone) SetCapture(hwnd);
        InvalidateRect(hwnd, nullptr, FALSE);
        return 0;
    }
    case WM_LBUTTONUP: {
        const int pressed = s->pressed_button;
        s->pressed_button = kBtnNone;
        if (pressed == kBtnNone) return 0;
        ReleaseCapture();
        InvalidateRect(hwnd, nullptr, FALSE);
        if (!inside(button_rect(pressed), GET_X_LPARAM(lp), GET_Y_LPARAM(lp))) return 0;
        if (pressed == kBtnPlay) apply_and_start(*s);
        else if (pressed == kBtnControls) show_controls(hwnd);
        else open_saves(*s);
        return 0;
    }
    case WM_KEYDOWN:
        if (wp == VK_RETURN) { apply_and_start(*s); return 0; }
        if (wp == VK_ESCAPE) { DestroyWindow(hwnd); return 0; }
        break;
    case WM_CLOSE:
        DestroyWindow(hwnd);
        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcW(hwnd, msg, wp, lp);
}

}  // namespace

Choice show(const std::string &exe_path) {
    State st;
    g_st = &st;
    wchar_t mod[MAX_PATH] = {};
    if (GetModuleFileNameW(nullptr, mod, MAX_PATH) > 0) st.folder = fs::path(mod).parent_path();
    else st.folder = fs::path(exe_path).parent_path();
    st.ini_path = st.folder / "saves" / "launcher.ini";

    HINSTANCE inst = GetModuleHandleW(nullptr);
    WNDCLASSEXW cls{sizeof cls};
    cls.lpfnWndProc = wnd_proc;
    cls.hInstance = inst;
    cls.hIcon = LoadIconW(inst, MAKEINTRESOURCEW(kIdIcon));
    cls.hIconSm = cls.hIcon;
    cls.hCursor = LoadCursorW(nullptr, reinterpret_cast<LPCWSTR>(IDC_ARROW));
    cls.lpszClassName = L"SpartanTotalWarriorUnifiedLauncher";
    RegisterClassExW(&cls);

    RECT wr = {0, 0, kClientW, kClientH};
    const DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX;
    AdjustWindowRect(&wr, style, FALSE);
    const int win_w = wr.right - wr.left, win_h = wr.bottom - wr.top;
    const int sx = (GetSystemMetrics(SM_CXSCREEN) - win_w) / 2;
    const int sy = std::max(0, (GetSystemMetrics(SM_CYSCREEN) - win_h) / 2);

    HWND hwnd = CreateWindowExW(0, cls.lpszClassName, L"Total Spartan 2 — Remaster 2.0", style, sx, sy, win_w, win_h, nullptr, nullptr, inst, nullptr);
    if (hwnd) {
        ShowWindow(hwnd, SW_SHOW);
        UpdateWindow(hwnd);
        MSG msg;
        while (GetMessageW(&msg, nullptr, 0, 0) > 0) {
            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }
    }

    if (st.banner) DeleteObject(st.banner);
    for (HFONT f : {st.f_title, st.f_sub, st.f_head, st.f_label, st.f_pill, st.f_btn, st.f_small})
        if (f) DeleteObject(f);
    g_st = nullptr;
    return st.choice;
}

}  // namespace ps2::spartan_launcher
#endif
