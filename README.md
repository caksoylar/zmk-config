# zmk-config

This is a [ZMK](https://zmk.dev) config repo for my 34-36 key split keyboards, arranged in 3 rows of 5 columns with 2 or 3 thumb keys on each side.
Currently these keyboards are:
- [Corne-ish Zen](https://lowprokb.ca/products/corne-ish-zen)
- [Swweeep](https://github.com/sadekbaroudi/sweep36) with [nice!views](https://nicekeyboards.com/nice-view)
- [Hypergolic (1.2 BM variant)](https://github.com/davidphilipbarr/hypergolic)

It mainly uses three non-base layers activated through two thumb keys, along with combos. It has <kbd>Ctrl</kbd>/<kbd>Shift</kbd> thumb hold-taps along with home row mods, which are also available on the left side of `NAV` layer.
`FUN` layer is implemented as a tri-layer, i.e. it is active when both `NAV` and `SYM` are active.

OS-dependent shortcuts are present on the `NAV` layer, e.g. for Windows:
- `Win Close`: <kbd>Alt</kbd><kbd>F4</kbdy>
- `Tab Next`: <kbd>Ctrl</kbd><kbd>Tab</kbd>
- `Tab Prev`: <kbd>Ctrl</kbd><kbd>Shift</kbd><kbd>Tab</kbd>
- `Tab Close`: <kbd>Ctrl</kbd><kbd>F4</kbd>
- `Desk Next`: <kbd>Ctrl</kbd><kbd>Gui</kbd><kbd>Right</kbd>
- `Desk Prev`: <kbd>Ctrl</kbd><kbd>Gui</kbd><kbd>Left</kbd>
- `Win Next`: <kbd>Alt</kbd><kbd>Tab</kbd> (hold Alt while layer active) using zmkfirmware/zmk#1366
- `Win Prev`: <kbd>Alt</kbd><kbd>Shift</kbd><kbd>Tab</kbd> (hold Alt while layer active)

Below representation was generated with [`keymap-drawer`](https://github.com/caksoylar/keymap-drawer) -- [edit and create your own here](https://caksoylar.github.io/keymap-drawer?keymap_yaml=H4sIAAAAAAAC_41WbVPbRhD-zq_Yqm3oy0GQzFuc6UzxG4TYxkEYlxLXFfYFeyx8jiQ3YSj9a5nJL-vu3kk-yyaGGS13t3t7zz37rOQwuFezpLgB8PFu3BvL-xsVRIMi9FU0kb1IJUEiB8Yb6lioH12dtS968TQcJb3C571eYQNdMoopTaVao38AW3D9TkBHQE1AS0BJwKmAuoC2gCsBm85mNw17wJxHAoZFKCdR-CiAFs554Xg2MnOf50dhYuYXPPeHow_pyjGvNPwqzht6qbkUVM2leZM75myOI8P3p4A_BJQFVARcCngr4AQvIDYFbAt4mYYxqOAmzScguZ_KItwOVZw8WjHVuD8_w1ov-dOgL9nVPLq0PXOHf9VYSDVJZGRd0XJVZCgTmV52Ccy7TjVXJSQGKb_g4mCJkBekojWvkUGMmTAjkZVdE083c30SHm7mjIpXaitqdJIPOs2leZs7pm7mGQ5n01lRpUsWW5NF4AgnV6U0H0Bar1V1yk4BXTHbgdUx23XJbB8WyPiWXdk9uWy2iy_Mu9Ky5TAdN-blYsx2zVYXjGWGXeWzbGtM9ymLF3sQ82WBBpdNn-ZuSeHcqIZ8C5_Q-I1KmR0jTK54o7oYTtmQpuw-zndYIud3Mt-T-YHMj2Tevyd7QOaQzCuHC5rBcX6lhd_I9MhskfmLzA6ZXTJ7ZPbJbM83TmYh3kFb5-sX8v5C5gWZ12RcMh6ZApmXjt3lT3U3M2B3dJw1bq3dnHcn7xzKcJBtpBJYG1d1LPKaUdYZTaAcqhhzoxqgFcl_9KgpPyd6ZNyXKoT2NL1rK7iVUFGfJoIXeUqDchD2M3J0gfmOjGNRu5j7UafVeU7UHR5Tl-TWK-ej22FCEhjk-CbUGiqNNNRWEJPcW_j9wPGMIL-ZxDKibKYV9BYdTomeUwm6w9N0L75TrdI8pw4YntWh5mJnefgU8NnFZ4-4nMZQV_1xSjp-EHG13ljsuto-hh_gc4jPK3zcHXxtXYDL1mNbYLvLdi9HZkXGY0MNDzU_NZcQubj9bJZA2y_pQaleJR5HkwT8fjQRmmooRTIYc_ZyKIPIJrakVLKS2XMZy-Rb1C4tLe54IjV-EYjVXG8u285QytDITY-16BqKLkRa1qvzEcuxu7FS2kbWNuj0IJ1QH6TH9kFG46kc18K2c5YC0kZjNBiEEokf8Yw9NRV9wh9fdt6HHE9b7FscEEidiKeMzZovpuiruxsVa64fpkW49lAsXqErYIzf078d-g7RX4guVi7-Uug-WuEoMM8z4f-tDUeVH3QpiMJfrw0n5bopmJ_Wh2N698CE_7w-HLG7Kfbr9eHYnu6hCe-uZwbBeCkY_nR9Oxyze2n2f9eDwZeBu6_D-RXTUaSUhXABQRESNc1f2RDKPxxWnJJuE6CKsLPt5gk2IEt-qyyetf1_vcuxdFQMAAA%3D)!
![3x5 layout](https://caksoylar.github.io/zmk-config/3x5.clm.svg)

I use a custom ZMK branch referenced in [west.yml](config/west.yml) which contains a few extras, namely [mouse keys](https://github.com/zmkfirmware/zmk/pull/778) used in the `MSE` layer, [global quick tap for combos](https://github.com/zmkfirmware/zmk/pull/1387), [swapper behavior](https://github.com/zmkfirmware/zmk/pull/1366) and [display improvements for the Corne-ish Zen](https://gist.github.com/caksoylar/c411313990978e1903c244f03039187a).
For a variant of my configuration tailored for stock ZMK, check out the [`stock` branch](https://github.com/caksoylar/zmk-config/tree/stock).

This repo also contains shield definitions for a few keyboards using Pro Micro format daughterboards:
- [`choc_ergo`](https://keypcb.xyz/choc_ergo)
- [`hypergolic`](https://github.com/davidphilipbarr/hypergolic) -- you should probably use [the official Cradio shield](https://github.com/zmkfirmware/zmk/tree/main/app/boards/shields/cradio/) instead
- [`ffkb` v1](https://fingerpunch.xyz/product/faux-fox-keyboard/) with an OLED, building upon [sadekbaroudi's](https://github.com/sadekbaroudi/zmk-ffkb) and [NCKiser's](https://github.com/NCKiser/zmk-ffkb) definitions
- [`swweeep`](https://github.com/sadekbaroudi/sweep36) using [sadekbaroudi's](https://github.com/sadekbaroudi/zmk-swweeep) definition

See my [QMK userspace](https://github.com/caksoylar/qmk_userspace/) for equivalent keymap definitions for QMK.
