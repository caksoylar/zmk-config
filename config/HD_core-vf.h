#define _______  &trans

/*  Base (alpha) Layer Hands Down Vibranium-vf
                34 key core layout
╭─────────────────────╮ ╭──────────────────────╮
│  X   W   M   G   J  │ │  #$  .:  /*  "<  '>  │
│  S   C   N   T   K  | |  ,;   A   E   I   H  │
│  F   P   L   D   V  │ │  -+   U   O   Y   B  │
╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
           ╰──────────╯ ╰───────────╯
*/

#define HD_combo_file "moutis_combos-vf.dtsi" // combos corresponding to alphas
#define HD_Layer_label "HD-Vf"

#define HD_Ltop &ak_x           &ak_w           &ak_m       &ak_g          &ak_j
#define HD_Lmid &hml LCTRL S    &hml LALT C     &hml LGUI N &hrm_t LSHFT T &ak_k
#define HD_Lbtm &ak_f           &ak_p           &kp L       &ak_d          &ak_v
#define HD_Lthm                                      &lt_BspcDel    &lt l_nav R

#define HD_Rtop &HashDllr       &DotColn        &SlshStar   &DqtLbkt        &SqtRbkt
#define HD_Rmid &CmmaSemi       &hrm_a RSHFT A  &hrm_e RGUI E &hrm_i RALT I &hmr RCTRL H
#define HD_Rbtm &MinusPlus      &ak_u           &ak_o       &ak_y           &ak_b
#define HD_Rthm &lt l_sym SPACE &lt l_nav RETURN
