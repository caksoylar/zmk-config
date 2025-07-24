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

#define HD_adapt_file "handsdown/vf-adapt.dtsi"  // the related adaptive keys file
#define HD_combo_file "handsdown/vf-combos.dtsi" // the related combo file


#define HD_Layer_label "HD-Vf"
#define HD_Ltop &ak_X           &ak_W           &ak_M           &ak_G           &ak_J
#define HD_Lmid &mt_S LCTRL S   &mt_C LALT C    &mt_N LGUI N    &mt_T LSHFT T   &ak_K
#define HD_Lbtm &ak_F           &ak_P           &kp L           &ak_D           &ak_V
#define HD_Lthm                                                 &lt_BspcDel     &lt l_nav R

#define HD_Rtop &HashDllr       &DotColn        &SlshStar       &DqtLbkt        &SqtRbkt
#define HD_Rmid &CmmaSemi       &mt_A RSHFT A   &mt_E RGUI E    &mt_I RALT I    &mt_H RCTRL H
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
#define DOT_Ltop &kp LS(X)      &kp LS(W)       &kp LS(M)       &kp LS(G)       &kp LS(J)
#define DOT_Lmid &kp LS(S)      &kp LS(C)       &kp LS(N)       &kp LS(T)       &kp LS(K)
#define DOT_Lbtm &kp LS(F)      &kp LS(P)       &kp LS(L)       &kp LS(D)       &kp LS(V)
#define DOT_Lthm                                                _______         &kp LS(R)

#define DOT_Rtop &kp HASH       &kp DOT         &t_dotcom       &t_dotedu       &t_dotorg
#define DOT_Rmid &caps_word     &kp LS(A)       &kp LS(E)       &kp LS(I)       &kp LS(H)
#define DOT_Rbtm _______        &kp LS(U)       &kp LS(O)       &kp LS(Y)       &kp LS(B)
#define DOT_Rthm _______        _______


