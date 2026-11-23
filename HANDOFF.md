# Handoff: Total Spartan 2 — Remaster 2.0

**Estado em 23/11/2026 (20:36).** Projeto separado da v1 (`outputs/Spartan` preservada intacta) para construir o **Remaster 2.0 ("Total Spartan 2")**.

## Repositório GitHub e Caminhos
- **GitHub:** `https://github.com/iiFoox/Total-Spartan-2-Remaster` (conta `iiFoox`, branch `main`)
- **Código-fonte isolado v2:** `C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\work\total-spartan-2`
- **Entregáveis v2:** `C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\outputs\TotalSpartan2` (`TotalSpartan2.exe`, `saves/`, `textures/eljefe/`, `textures/remaster2/`, `compiler/`, `dxcompiler.dll`, `dxil.dll`)
- **Backup intacto da v1 (NÃO alterar):** `C:\Users\vfbnn\Documents\Codex\2026-11-22\https-github-com-morluto-rea-https\outputs\Spartan` e `work\spartan\pn`
- **Regra do ambiente:** todo comando de shell deve começar com `rtk` (`rtk proxy ...` / `rtk git ...`). Nunca apagar `saves/`.

## O que JÁ foi feito, compilado e validado nesta etapa

1. **Bug dos 2 quadrados invisíveis no canto inferior direito — CORRIGIDO E VALIDADO (`runtime/src/gs/gs.cpp`):**
   - Causa raiz: `widehud` disparava em `width * height * 99 / 100` (tile 222 de 224), estreitando os 2 últimos tiles 32×32 da coluna direita (`480..512, 384..448`).
   - Correção: disparar em 100% (`width * height`) e nunca estreitar tiles 32×32 de pós-processamento. Validado visualmente.

2. **Bug das faixas pretas nas cutscenes em 16:9 — CORRIGIDO E VALIDADO (`runtime/src/gs/gs.cpp`):**
   - Causa raiz: as barras pretas das cutscenes são desenhadas como 16 tiras verticais untextured de `32×56` (`prim=6, !textured, zmsk=1`) em `y=0..56` e `y=392..448`; o `widehud` estreitava para 3/4 deixando os cantos abertos.
   - Correção + Recurso novo `PS2_CUTSCENE_BARS`:
     - `PS2_CUTSCENE_BARS=full` (**Cinema Limpo**): barras pretas 100% de ponta a ponta (`work/total-spartan-2/v2_bars_clean_2550.png`).
     - `PS2_CUTSCENE_BARS=off` (**Tela Cheia 16:9**, padrão no Launcher 2.0): remove as tarjas pretas nas cutscenes mantendo legendas PT-BR (`work/total-spartan-2/v2_nobars_2550.png`).

3. **Pós-processamento Remaster 2.0 (`runtime/src/gs/gpu/blit.wgsl` + `gpu.cpp`):**
   - `PS2_COLOR=4`: **2.0 ACES** (tone mapping ACES Filmic + realce quente bronze/ouro + CAS 0.28).
   - `PS2_VIGNETTE=1` (bit 11): vinheta cinematográfica sutil nas bordas.
   - `PS2_OVERSCAN_CROP=1` (bit 12): corte limpo de 1px esq/dir/topo e 4px base removendo ruído de borda do PS2.
   - Validado em `work/total-spartan-2/v2_hud_22120.png`.

4. **Motor de Texturas HD 2.0 em camadas (`runtime/src/gs/gpu/gpu.cpp`):**
   - `init_tex_pack()` agora aceita `.dds` **e** `.png`, carregando `PS2_TEX_PACK` (`textures/eljefe`) como base fiel e **`PS2_TEX_PACK_CUSTOM`** (`textures/remaster2`) por cima com prioridade máxima e sem bloqueio pelo `pack_compose` (`is_custom=true`).
   - Adicionado `PS2_TEX_PACK_DUMP=<dir>` para extrair texturas únicas com nomes PCSX2 XXH3-64 exatos (`<texhash>-<cluthash>-<bits>_<w>x<h>.rgba`).

5. **Launcher 2.0 + Novas Artes AAA geradas (`host/spartan_launcher.cpp`, `art/`):**
   - Novo banner AAA (`art/banner_remaster2_full.jpg` -> `host/spartan_banner.bmp`), novo ícone AAA escudo Lambda circular (`art/icon_shield_alpha.png` -> `host/spartan.ico`), nova arte de menu principal (`art/menu_bg_remaster2.png`) e nova arte de loading (`art/loading_remaster2.png`).
   - Launcher 2.0 com 14 opções em pílulas (incluindo Cutscenes 16:9 Cinema Limpo/Tela Cheia, 2.0 ACES, Cinema e Bordas Vinheta+Crop, Texturas HD Remaster 2.0).
   - `outputs/TotalSpartan2/TotalSpartan2.exe` já compilado e empacotado (`win_imports.py`: 35 DLLs, 0 falhas).

6. **Dump e Catálogo completo de 83 texturas UI/Menus/HUD/Fontes já pronto para redesenho:**
   - `work/total-spartan-2/ui_dump_png/` + `ui_catalog.tsv` + `ui_sheet_0.png` + `ui_sheet_1.png`.
   - Principais hashes já identificados (não cobertos pelo El Jefe):
     - **Logos de título (`512×512`):** `5b5b5d9b5dba2c78-34fe96a03cb4a1b4-00002653` (#38) e `7769273d1b8512a8-5c6517084ea45372-00002653` (#51)
     - **Fundo celeste do menu (`512×512`):** `3a236cb574a28475-a2cec48fdf13586f-00002653` (#28) → pronto para receber `art/menu_bg_remaster2.png`
     - **Mapa da Grécia (`512×512`):** `0d4826f714dbd387-84fe79444ce7ab2f-00002653` (#8)
     - **Botões PS2 (`64×64`):** `182164057b1960f4-aa0ba14d565954fb-00001993` (#15)
     - **Bússola e contornos HUD (`256×256`):** `5f0883df6a024151-ee8e8738788b1f05-00002213` (#40)
     - **Setas/caixa de menu (`128×128`):** `2928f0e73d765c0f-da6ff4702ad6ea83-00001dd3` (#21)
     - **Atlas ícones menu/pausa (`256×256`):** `352371980a3a643f-e01d3659e00c1e1c-00002213` (#26)
     - **Molduras de menu (`512×512`):** `b001cec0d92d07d6-9d497ed79701fa5c-00002653` (#63) e `b84b0d8ed144f720-14c8b90134b7c0a8-00002653` (#72)
     - **Fontes (`FONT14`):** `#1`, `#27`, `#44`, `#55`, `#64`, `#74`

## Próximos passos exatos para continuar
1. **Redesenhar em 4× HD as figuras/UI/HUD/Logos/Menus/Fontes** em `outputs/TotalSpartan2/textures/remaster2/<texhash>-<cluthash>-<bits>.png` (usando `art/menu_bg_remaster2.png`, `art/loading_remaster2.png`, vetorial 4× para bússola/botões/setas/molduras, novo logo "TOTAL SPARTAN 2 / REMASTER 2.0" alinhado aos UVs exatos de `#38`/`#51`, e super-resolução limpa para as fontes e HUD de vida/espada).
2. **Dumpar também texturas da tela de loading (`FE_LOAD`), menu de pausa, mapa de upgrades/extras e fases restantes (`LEVEL02`–`LEVEL14`)** para cobrir 100% das figuras 2D e telas do jogo.
3. **Validar visualmente** o Menu Principal, Tela de Loading, Cutscenes e Gameplay com `textures/remaster2/` ativo.
4. **Opcional de performance:** compilar os 14 programas VU1 nativamente em C++ (como os 21 VU0) e testar o fluxo completo do Launcher 2.0.
5. **Reempacotar** via `rtk proxy powershell -NoProfile -ExecutionPolicy Bypass -File work/total-spartan-2/spartan_tools/build_v2.ps1` e fazer `rtk git push` para `https://github.com/iiFoox/Total-Spartan-2-Remaster`.
