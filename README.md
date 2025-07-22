# [**Hands Down**](http://handsdownlayout.com) on ![zen pic](zenlogo.png)

![zen pic](zen.jpg)

My personal ZMK instance of [**Hands Down**](http://handsdownlayout.com) on small portable boards.

- [**Corne-ish** *Zen*](https://www.reddit.com/r/ErgoMechKeyboards/comments/reyulp/my_new_zen/) 
- [**Zaphod**](https://www.reddit.com/r/ErgoMechKeyboards/comments/1130oor/zaphod_in_café_society/)
- [**Bad Wings** *Slim*](https://www.reddit.com/r/ErgoMechKeyboards/comments/16huy9s/thin_is_in/)
- [**Microdox**](https://old.boardsource.xyz/store/5f2e7e4a2902de7151494f92)
- [**KLOR**](https://github.com/GEIGEIGEIST/KLOR)
- [**Kyria**](https://splitkb.com/products/kyria-rev3)

```
     ╭─────────────────────╮ ╭──────────────────────╮
ESC  │  X   W   M   G   J  │ │  #$  .:  /*  "[  ']  │ BSP
TAB  │  S   C   N   T   K  | |  ,;   A   E   I   H  │ Tg(Num)
LSFT │  F   P   L   D   V  │ │  -+   U   O   Y   B  │ RSFT
     ╰──────╮  App BSP  R  │ │  SPC RET nLk  ╭──────╯
            ╰──────────────╯ ╰───────────────╯
```
I have definitions for:
- [***Vibranium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.eyvjpfoqjy65) (flavors *Vf, Vb, Vv, Vx*)
- [***Promethium***](https://www.reddit.com/r/KeyboardLayouts/comments/1g66ivi/hands_down_promethium_snth_meets_hd_silverengram/)
- [***Titanium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.wc98dpulr54c)
- [***Rhodium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.bv3bay1cp21z)

 [***Vibranium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.eyvjpfoqjy65) is designed to work with all the other [smart behaviors](https://sites.google.com/alanreiser.com/handsdown#h.8ngiif20qf4). Currently I have most of the *essential* combos (`Qu`,`Z`, `Undo`, `Cut`, `Copy`, `Paste`, etc.), *and* **`H` digraph combos** *to send* `TH`,`CH`,`WH`,`SH`,`GH`,`PH` *bigrams*. There's a ZMK take on [***Adaptive Keys***](https://sites.google.com/alanreiser.com/handsdown#h.ps4itorhjiq9) (*using macros and sticky layers*) and [***Linger Keys***](https://sites.google.com/alanreiser.com/handsdown#h.w8doktr0rzce) (*using macros and hold-tap behaviors for things like diacritics `éèôåō` and paired symbols, `{([<>])}` and more*). They behave a bit differently than in QMK, but are quite usable. Eventually I hope to deploy a properly coded solution to these features.

In the works:
- [***Neu***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.ze4kq734zl5w)
- [***Gold***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.8i2msuo3butx)


Currently building only for a Mac (*hard coded for gui instead of ctrl, and some Mac specific keycodes*), because I use this mainly with my iPads and phone when I'm on the road. My [***Semantic Keys***](https://sites.google.com/alanreiser.com/handsdown#h.7mehnxbqcx2s) feature for platform independence works on my QMK implementations, but isn't yet fully fleshed out and will require more invasive work for ZMK, so this too is for later. *I'll probably deal with this with a separate platform layer and macro parameters…this will take time. I'm stupid busy currently.*

Thanks to [jcmkk3](https://github.com/jcmkk3) for the idea to implement adaptives via sticky layers, and many others on the [**Hands Down** Discord](https://discord.gg/BC3fzb2E) for the endless creativity and support. Of course, huge thanks to [Pete Johanson](https://github.com/petejohanson) *and contributors* for ZMK ([*why not consider sponsoring them*](https://github.com/sponsors/petejohanson)?), and for the exquisite [Zaphod](https://github.com/petejohanson/zaphod-config) board design, and to [Darryldh (lowprokb)](https://github.com/LOWPROKB) for the sublime [Corne-ish Zen](https://github.com/LOWPROKB/zmk-config-Corne-ish-Zen) board. Also thanks to [caksoylar](https://github.com/caksoylar)/Bravekarma on the [ZMK Discord](https://discord.gg/HXWA39qJKX) for the great keymap visualization tool, [keymap drawer](https://github.com/caksoylar/keymap-drawer) used to make the keymap images below, and a lot of help with some implementations (*consider sponsoring them, too, for all their work maturing ZMK*?).

 Below is a somewhat simplified view of my keymap (*no adaptive or config layers, some combos not shown*).

![zaphod keymap](zaphod_keymap.png)
