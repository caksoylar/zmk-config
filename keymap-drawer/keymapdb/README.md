These are abbreviated/simplified keymap renders used for the README and https://keymapdb.com/keymaps/caksoylar/.

```sh
KEYMAP_dark_mode=auto keymap draw -g 0 9 26 29 -- keymap.yaml >keymap.svg

# light mode and width adjusted for http://keymapdb.com/keymaps/caksoylar
keymap draw -g 0 9 26 29 -- keymap.yaml | perl -pe 's/(<svg width=)".*?"/$1"960"/' >keymapdb.svg
```
