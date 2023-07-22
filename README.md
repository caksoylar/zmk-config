# zmk-config

This is a [ZMK](https://zmk.dev) config repo for my 30-36 key split keyboards, arranged in 3 rows of 5 columns with 2 or 3 thumb keys on each side.
The keymap is optimized to be usable with 30 keys, with dropped keys from inner index and pinky columns and two thumb keys each, like the [Hummingbird](https://github.com/PJE66/hummingbird) layout.
Currently these keyboards are:
- [Corne-ish Zen](https://lowprokb.ca/products/corne-ish-zen)
- [Swweeep](https://github.com/sadekbaroudi/sweep36) with [nice!views](https://nicekeyboards.com/nice-view)
- [Hypergolic (1.2 BM variant)](https://github.com/davidphilipbarr/hypergolic)
- A hand-wired [Rommana](https://github.com/AlaaSaadAbdo/Rommana) (coming soon)

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

Below representation was generated with [`keymap-drawer`](https://github.com/caksoylar/keymap-drawer) -- [edit and create your own here](https://caksoylar.github.io/keymap-drawer?keymap_yaml=H4sIAAAAAAAC_9VXS2_bRhC-51dM0wf7WCemZNmOggKVZNGPSIqil-O4qkpLG0sgrVVJuolh-Na6lwLuqde2KNBL0fTaHooC_Sn-A-1P6Ozs0iIpSnKOEcBd7uzs7Oz3zcxSrn0mToM8nH9x4vQcfnYkbG-Qh77wxrznicAO-ICBnHS1ZqVw8Ljd6vkTdxT0si9zvezFHZzjnp-_A7BVtmS3AodPGOwzsBjUGRQZPGJQYdBmcMDgrnG3q5TO0WCBwTAPpcBzLxhIQYME26cjPW7SuOAGetyicXM4eh5KtklSbZZxXFWi2oxSOWFmN7HN46kfEe-eMQjOJjwPx0Phy6VPGZQYbKk1neSsFO4lhTsMDGYwuKfm78fn1WYrNHV9-WfoVVwJdUDrlP3-1NOI_PrbX0leK3Ri4u9-VlAcVGPiVz9GEIqZ-SUEasaFQr2l2d0nFLYJCGR3L2QXQTyIoNdIcttMgN5KkLIzQ9ujCLdPb8ttIbHNbgq3MYosCpy61E7wGRti5Ea5fDNZ3K6WNYvkqEpURLBByYkk7hKPdY0UeYqANolsi8J5L0xotBWhm9xIRv-zMGfmJkwtKazeImFoQ4lecjEdmfBCDJmCiIpEtTxrB_HUWBhv4YbGJ7J5G5t3sH8Xe9zb2JDCTdk8MMgz7cFHOPgYJT3sV7D_DPtVqbEmm5xs1uUp0kPun79x_kOp9J6REnd5eJg8mWFK7YxsssbSWjIv-hCaaKB8_1eoFXj22J8GEcmG3B2Eogb3eRBZmhZbCHlYIUZjKLnC5wxa9hE0RsfDQL1W-HP9puc7woX2BONu7HMPp-r2MYct8WLM4L8ffvpaC6RGyXb7Gk1FPR2SHIkmXlgapGFlZ0eccLL2FbXfUHuJYT8epLMj3a97_Ev1VuMvyS8_4Hqnq99nIzk2pAy8vnr17x9Xsv-N-vPXJSuO-QwlixgkEJbQZbVrmi7LxNzO4JPFZw2fHBaB0wDazaJ6KVYwffB6Z_IWiCa-tY7aG_hs4vMAH3MV74QWmNRmqM1Su0ZtLh3wLe47OjToVQeMZZoKccvMLEG8ZE98qIi-g0x5o3EAzb43lqyd-hyKHreduQTMAl8UYiHuM6LZBTf28PIKi4zM3cRT3VdhST0GZlXFPA3D_nJO0OuCG3VHG9U2pyYv5UQ69FFvFt9_RbvvYNaOJMbV0WDg8nBkCe8FfjqGw1vjbBjJFxkDykyYAzISYpK4ob44ORL49YnySR4OMUyyXYZ6Dn2K6Z-LMxi93Ys0tScxNYzviBqGXyaDig59C8atUS5EdNFmJqt0O_N3lhbDnTvzd8a02gjVHi7ZGdNvM9Q1PjfYQi_RcGZDefnpshOh4cym0r2_RFfmp6lP__4yXfTB1D58sEwX8TI1A8bh4rOZ6K-p_TW6S3TNqb90caR5wcDGsirw6hF5WL1n5uJH0FvRR9trLseSaK6r5VS49j38o5W6-GYN1k9zTdLs6AsosiVevOlBS3XzRg0LflcP0fiRCAJxkso2FupSpcFusyyLu2X1bljqUkH_H3q9TqBoDgAA)!
![3x5 layout](https://caksoylar.github.io/zmk-config/3x5+3.30keys.svg)

Also check out the automatically generated layouts using the [automated Github workflow](https://github.com/caksoylar/keymap-drawer/tree/main#setting-up-an-automated-drawing-workflow) for each keyboard in the [`keymap-drawer` folder](keymap-drawer/) which is always up to date with the config.

I use a custom ZMK branch referenced in [west.yml](config/west.yml) which contains a few extras, namely [mouse keys](https://github.com/zmkfirmware/zmk/pull/778) used in the `MSE` layer, [global quick tap for combos](https://github.com/zmkfirmware/zmk/pull/1387), [swapper behavior](https://github.com/zmkfirmware/zmk/pull/1366) and [display improvements for the Corne-ish Zen](https://gist.github.com/caksoylar/c411313990978e1903c244f03039187a).
For a variant of my configuration tailored for stock ZMK, check out the [`stock` branch](https://github.com/caksoylar/zmk-config/tree/stock).

This repo also contains shield definitions for a few keyboards using Pro Micro format daughterboards:
- [`choc_ergo`](https://keypcb.xyz/choc_ergo)
- [`hypergolic`](https://github.com/davidphilipbarr/hypergolic) -- you should probably use [the official Cradio shield](https://github.com/zmkfirmware/zmk/tree/main/app/boards/shields/cradio/) instead
- [`ffkb` v1](https://fingerpunch.xyz/product/faux-fox-keyboard/) with an OLED, building upon [sadekbaroudi's](https://github.com/sadekbaroudi/zmk-ffkb) and [NCKiser's](https://github.com/NCKiser/zmk-ffkb) definitions
- [`swweeep`](https://github.com/sadekbaroudi/sweep36) using [sadekbaroudi's](https://github.com/sadekbaroudi/zmk-swweeep) definition

See my [QMK userspace](https://github.com/caksoylar/qmk_userspace/) for equivalent keymap definitions for QMK.
