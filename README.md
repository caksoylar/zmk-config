# zmk-config

This is a [ZMK](https://zmk.dev) config repo for my 34 key split keyboards, arranged in 3 rows of 5 columns with 2 thumb keys on each side. It uses three non-base layers activated through two thumb keys along with combos. It has <kbd>Ctrl</kbd>/<kbd>Shift</kbd> thumb hold-taps along with home row mods, which are also available on the left side of `Nav` (blue) layer. `Fun` layer is implemented as a tri-layer (active when both `Nav` and `Sym` are active).

OS-dependent shortcuts are present on the `Nav` layer, e.g. for Windows:
- `WinQ`: <kbd>Alt</kbd>+<kbd>F4</kbd>
- `TabR`: <kbd>Ctrl</kbd>+<kbd>Tab</kbd>
- `TabL`: <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>Tab</kbd>
- `DeskL`: <kbd>Ctrl</kbd>+<kbd>Gui</kbd>+<kbd>Left</kbd>
- `DeskR`: <kbd>Ctrl</kbd>+<kbd>Gui</kbd>+<kbd>Right</kbd>
- `WinN`: <kbd>Alt</kbd>+<kbd>Tab</kbd> (hold Alt while layer active), not implemented
- `WinP`: <kbd>Alt</kbd>+<kbd>Shift</kbd>+<kbd>Tab</kbd> (hold Alt while layer active), not implemented

![34-36 keys layout](https://caksoylar.github.io/zmk-config/34-36-keys-layout.png)

It also contains shield definitions for two keyboards using Pro Micro format daughterboards:
- [`choc_ergo`](https://keypcb.xyz/choc_ergo)
- [`hypergolic`](https://github.com/davidphilipbarr/hypergolic) -- you should probably use [the official Cradio shield](https://github.com/zmkfirmware/zmk/tree/main/app/boards/shields/cradio/) instead

Also see my [QMK userspace](https://github.com/caksoylar/qmk_userspace/) for equivalent keymap definitions for QMK.
