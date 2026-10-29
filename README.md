# Tom and Jerry Tales decompilation (EU)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/tom-and-jerry-tales-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/tom-and-jerry-tales-decomp) [![Data](https://bytematch.dev/liolu/tom-and-jerry-tales-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/tom-and-jerry-tales-decomp) [![Functions](https://bytematch.dev/liolu/tom-and-jerry-tales-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/tom-and-jerry-tales-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `AJTP`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`██████████████████░░` **89.07%** of the code matched · data 99.82% · 1857/1922 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 1240 | 1240/1240 | 73.91% |
| NitroSDK (Nintendo's system library) | 221 | 335/335 | 6.38% |
| Reused from other decompilations, not merged into files yet | 89 | 89/89 | 4.19% |
| NitroSystem (Nintendo's middleware) | 84 | 134/134 | 2.47% |
| MSL (C standard library) | 38 | 49/49 | 1.64% |
| Other libraries | 10 | 10/10 | 0.49% |
| Game code: `src/data/` | 1336 | 0/0 | 0.00% |

*Updated 2026-10-29 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py eu
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
