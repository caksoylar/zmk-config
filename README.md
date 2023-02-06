# zmk-config

This is a [ZMK](https://zmk.dev) config repo for my 34-36 key split keyboards, arranged in 3 rows of 5 columns with 2 or 3 thumb keys on each side. It uses three non-base layers activated through two thumb keys along with combos. It has <kbd>Ctrl</kbd>/<kbd>Shift</kbd> thumb hold-taps along with home row mods, which are also available on the left side of `NAV` layer. `FUN` layer is implemented as a tri-layer (active when both `NAV` and `SYM` are active).

OS-dependent shortcuts are present on the `NAV` layer, e.g. for Windows:
- `Win Close`: <kbd>Alt</kbd><kbd>F4</kbdy>
- `Tab Next`: <kbd>Ctrl</kbd><kbd>Tab</kbd>
- `Tab Prev`: <kbd>Ctrl</kbd><kbd>Shift</kbd><kbd>Tab</kbd>
- `Tab Close`: <kbd>Ctrl</kbd><kbd>F4</kbd>
- `Desk Next`: <kbd>Ctrl</kbd><kbd>Gui</kbd><kbd>Right</kbd>
- `Desk Prev`: <kbd>Ctrl</kbd><kbd>Gui</kbd><kbd>Left</kbd>
- `Win Next`: <kbd>Alt</kbd><kbd>Tab</kbd> (hold Alt while layer active), only in `experimental/*` branches
- `Win Prev`: <kbd>Alt</kbd><kbd>Shift</kbd><kbd>Tab</kbd> (hold Alt while layer active), only in `experimental/*` branches

I also use a nifty mod-morph trick: While holding <kbd>Alt</kbd> on the left home row, tapping the backspace thumb emits <kbd>Tab</kbd> for one-handed window switching. <kbd>Alt</kbd><kbd>Backspace</kbd> can still be performed with the right hand modifier.

Below representation was generated with [`keymap-drawer`](https://github.com/caksoylar/keymap-drawer) -- [edit it here](https://caksoylar.github.io/keymap-drawer?keymap_yaml=H4sIAAAAAAAC_41WbVPbRhD-nl-xVds4bS-AZF7NdKb4jUBs4yIbSsF1hblgj4XlSHISJnH-Wmb6y7q7d5JPssFhRuu7fbvd59mT8L3HYBaXXgC8fxj3x_LxNvDCuxIMwvHt3WYoP9ja5CtHaBxdnXU7_Wjqj-J-8dNOv_gCTTKMKEe1VqcfgNdw_aeASwE1AecCOgKuBHQFnAg4E9DuJU6fhyWoxKEvAFMfzQWQ4ng24r2r90d-zPuq3rvD0TulqaPmWMCbvP40F_k2l7mh9-nRVsGap0X9LeAvARUBFwLKAloCmgIsYQnYELCZuKX5gBJ0vFtM9DiVJbgfBlE8N7zUKeRViwamoXV0ocPL7tQbSNPmXjW1bdmU9lmbxDI0TdwwR1WlL2O5VFOl0cwxVEc-uM9TAQ0mCakqWIUFR0SNAN0IIYeKc1Zg_3rv8h6P1_sO77lSxVFT6VsZPWlquciTXOazxdHLDFWZpLc8AgVRyDGU8JIyv4IfxcriDEOvSGETMmVaFgakKZOKCDFaNEwJIelYZos5btZSYrho8_6svjxcNzLjMg51BuGU0UAeMV_qqAfGnGs11EuQMdn6Vhj1CVWybpvHVndK_nhU1p2yITBpP9YPeHesP0j8SOInEj-TuLkhuUdin8SBxTctLcf6jRS_k-iTeE3iHxJbJLZJ7JDYJbGxCJzMfOxBSeu_b2T9lcRLEockbBIOiSKJTcscm6fGhREwRyRKJ6HebS3o5sih9O_SQKLACFw1AohrCtnlaAIVP4gwN04DtPFNrFYt-SlWK22-CHzoTpH84AF3be9eQjX4ONFLstQmdwqKFB3FMDfJhWTfKph8rvKqRA1JBrWmfOej-yEqKp4_yOFNVatSaaVKbXsRjX0bvxK4nlHJJ5NIhpRSXwkVotzNOp9jglp4Gu7sJTWo-R4e0D3loW7jzXLwKeKzjc8ONT6NoBEMxsmA4WdP0Js1e-vqu-i-h88-Pgf42Fv4nu2AzdJhWWS5zXInB2ZVRmMNDS8VPnWbKrIx_GwWQ9ctq0W5USMcR5MY3EHI7CPUUA6lN-bsFV96oQlsOQjilciey0jGz0G7pMpGrEw9CB5uA_4fAV2mJbh2sAOn2BMwxq_vvxZ9tejPR1MCZ29uuGPXjqPdv651R-j3euRE7odr3QlOOynm1Xp3TG_vafdf1rtj7XZS-_V6d5wZe1-799Yjg8U4STH8Pn3eHbM7SfYv64vBCbV3lTvP_WUQ4tsk4y7AK0EcTPMta0D5a7bilCRMQFCCrQ0nD7Ausuy2K-J7wv8HArZOhcsKAAA%3D)!
![3x5 layout](https://caksoylar.github.io/zmk-config/3x5.full.svg)

This repo also contains shield definitions for a few keyboards using Pro Micro format daughterboards:
- [`choc_ergo`](https://keypcb.xyz/choc_ergo)
- [`hypergolic`](https://github.com/davidphilipbarr/hypergolic) -- you should probably use [the official Cradio shield](https://github.com/zmkfirmware/zmk/tree/main/app/boards/shields/cradio/) instead
- [`ffkb` v1](https://fingerpunch.xyz/product/faux-fox-keyboard/) with an OLED, building upon [sadekbaroudi's](https://github.com/sadekbaroudi/zmk-ffkb) and [NCKiser's](https://github.com/NCKiser/zmk-ffkb) definitions

See my [QMK userspace](https://github.com/caksoylar/qmk_userspace/) for equivalent keymap definitions for QMK.
