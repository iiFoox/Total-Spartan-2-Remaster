# Total Spartan 2 — Remaster 2.0 (Native Windows PC Port)

Port nativo e remasterização 2.0 para Windows de *Spartan: Total Warrior* (`SLUS-21212`, USA), sem PCSX2 e sem BIOS.

> **Aviso legal:** Este repositório contém **apenas** o código-fonte do port/remaster, shaders WGSL, launcher 2.0, ferramentas de tradução PT-BR e artes originais criadas para o Remaster 2.0. Nenhum arquivo proprietário da ISO original é distribuído aqui — é necessário fornecer a sua própria cópia legal da ISO (`SLUS-21212`).

## Destaques do Remaster 2.0
- **Widescreen 16:9 real sem bugs:** correção definitiva do `widehud` em `runtime/src/gs/gs.cpp` eliminando os 2 quadrados invisíveis no canto inferior direito (`100%` da cobertura de tiles) e corrigindo as faixas pretas cinematográficas das cutscenes (com opção de **Barras Cinema Limpas** ou **Cutscenes em 16:9 Tela Cheia sem tarjas**).
- **Motor de Texturas HD 2.0 (`gpu.cpp`):** suporte nativo a pacotes PCSX2 XXH3-64 (`.dds` + `.png` prioritários), permitindo combinar texturas 3D 4× fiéis do pacote El Jefe com figuras 2D, menus, telas de título e HUD completamente redesenhados em 4× HD em `textures/remaster2/`.
- **Pós-processamento Remaster 2.0 (`blit.wgsl`):** ACES Filmic / Grading configurável, nitidez adaptativa (CAS), suavização de bordas, vinheta cinematográfica opcional e corte limpo de overscan.
- **Áudio de cutscenes corrigido (`spu2.cpp`):** `kon_late` ativo por padrão resolvendo o corte de voz do driver `MultiStream V6.2` (`STREAM.IRX`).
- **Tradução PT-BR completa:** 49 arquivos `.TXT` (3.146 strings) traduzidos com acentuação completa na fonte nativa.
- **Desempenho 60+ FPS em 2K/4K:** 21 programas VU0 compilados nativamente + compilador Direct3D 12 DXC (`fma()`).
- **Launcher 2.0 unificado:** arte e ícone completamente novos embutidos em executável único (`TotalSpartan2.exe`).
