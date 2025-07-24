#define _______  &trans

/*      Base (alpha) Layer Hands Down Vibranium-vf
                    34 keys (core)
 ╭─────────────────────╮             ╭──────────────────────╮
 │  X   W   M   G   J  │             │  #$  .:  /*  "[  ']  │
 │  S   C   N   T   K  |             |  ,;   A   E   I   H  │
 │  F   P   L   D   V  │             │  -+   U   O   Y   B  │
 ╰──────────╮  BSP  R  │             │  SPC RET  ╭──────────╯
            ╰──────────╯             ╰───────────╯
*/

#ifndef ZMK_BASE_LAYER
  #define ZMK_BASE_LAYER(name, LT, RT, LM, RM, LB, RB, LH, RH)                 \
      ZMK_LAYER(name, LT RT LM RM LB RB LH RH)
#endif

#define HD_adapt_file "handsdown/vf-adapt.dtsi" // the related adaptive keys file
#define HD_combo_file "handsdown/vf-combos.dtsi" // the related combo file

#define HD_Layer_label "HD-Vf"
#define HD_Ltop &ak_X           &ak_W           &ak_M           &ak_G           &ak_J
#define HD_Lmid &hml LCTRL S    &hml LALT C     &hml LGUI N     &hrm LSHFT T    &ak_K
#define HD_Lbtm &ak_F           &ak_P           &kp L           &ak_D           &ak_V
#define HD_Lthm                                                 &lt_BspcDel     &lt l_nav R

#define HD_Rtop &HashDllr       &DotColn        &SlshStar       &DqtLbkt        &SqtRbkt
#define HD_Rmid &CmmaSemi       &hrm RSHFT A    &hrm RGUI E     &hrm RALT I     &hmr RCTRL H
#define HD_Rbtm &MinusPlus      &kp U           &kp O           &kp Y           &kp B
#define HD_Rthm &lt l_sym SPACE &lt l_nav RETURN

#define JP_Layer_label "HD-JP" // Japanese "mode" (L, C, X not used in Japanese, so repurpose to ん, Z, -)
#define JP_Ltop &kp MINUS       &kp W           &kp M           &kp G           &kp J
#define JP_Lmid _______         &hml LALT Z     _______         &hml LSHFT T    &kp K
#define JP_Lbtm &kp F           &kp P           &t_nn           &kp D           &kp V
#define JP_Lthm                                                 _______         _______

#define JP_Rtop _______         &DotColnJ       &SlshStarJ      &kp LBKT        &kp RBKT
#define JP_Rmid _______         &hmr RSHFT A    &hmr RGUI E     &hmr RALT I     _______
#define JP_Rbtm _______         &kp U           &kp O           &kp Y           &kp B
#define JP_Rthm _______         _______


#define l_akDOT_label "l_akDOT"
#define DOT_Ltop _______        _______         _______         _______         _______
#define DOT_Lmid _______        _______         _______         _______         _______
#define DOT_Lbtm _______        _______         _______         _______         _______
#define DOT_Lthm                                                _______         _______

#define DOT_Rtop _______        &kp DOT         &t_dotcom       &t_dotedu       &t_dotorg
#define DOT_Rmid _______        _______         _______         _______         _______
#define DOT_Rbtm _______        _______         _______         _______         _______
#define DOT_Rthm _______        _______


