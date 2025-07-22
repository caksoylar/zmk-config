#define _______  &trans

/*      Base (alpha) Layer Hands Down Titanium
                    34 keys (core)
 ╭─────────────────╮ ╭─────────────────╮
 │  X  G  M  P  J  │ │ #$  .: /* "< '> │
 │  C  S  N  T  K  | | ,;   A  E  I  H │
 │  W  F  L  D  V  │ │ -+   U  O  Y  B │
 ╰───────╮  BSP R  │ │ SPC RET  ╭──────╯
         ╰─────────╯ ╰──────────╯
*/

#define HD_combo_file "handsdown/ti-combos.dtsi" // the related combo file

#define HD_Layer_label "HD-Ti"
#define HD_Ltop &ak_x           &ak_g           &ak_m           &ak_p           &ak_j
#define HD_Lmid &hml LCTRL C    &hml LALT S     &hml LGUI N     &hrm_t LSHFT T  &ak_k
#define HD_Lbtm &ak_w           &ak_p           &kp L           &ak_d           &ak_v
#define HD_Lthm                                                 &lt_BspcDel     &lt l_nav R

#define HD_Rtop &HashDllr       &DotColn        &SlshStar       &DqtLbkt        &SqtRbkt
#define HD_Rmid &CmmaSemi       &hrm_a RSHFT A  &hrm_e RGUI E   &hrm_i RALT I   &hmr RCTRL H
#define HD_Rbtm &MinusPlus      &ak_u           &ak_o           &ak_y           &ak_b
#define HD_Rthm &lt l_sym SPACE &lt l_nav RETURN

#define JP_Layer_label "HD-JP" // Japanese "mode" (L, C, X not used in Japanese, so repurpose to ん, Z, -)
#define JP_Ltop &kp MINUS       &kp G           &kp M           &kp P           &kp J
#define JP_Lmid &hml LCTRL Z    _______         _______         &hml LSHFT T    &kp K
#define JP_Lbtm &kp W           &kp F           &t_nn           &kp D           &kp V
#define JP_Lthm                                                 _______         _______

#define JP_Rtop _______         &DotColnJ       &SlshStarJ      &kp LBKT        &kp RBKT
#define JP_Rmid _______         &hmr RSHFT A    &hmr RGUI E     &hmr RALT I     _______
#define JP_Rbtm _______         &kp U           &kp O           &kp Y           &kp B
#define JP_Rthm _______         _______

#define l_akA_label "l_akA"
#define A_Ltop _______          _______         _______         _______         _______
#define A_Lmid _______          _______         _______         _______         _______
#define A_Lbtm _______          _______         _______         _______         _______
#define A_Lthm                                                  _______         _______

#define A_Rtop _______          _______         _______         _______         _______
#define A_Rmid _______          _______         &kp U           _______         _______
#define A_Rbtm _______          _______         _______         _______         _______
#define A_Rthm _______          _______

#define l_akB_label "l_akB"
#define B_Ltop _______          _______         _______         _______         _______
#define B_Lmid _______          _______         _______         _______         _______
#define B_Lbtm _______          _______         _______         _______         _______
#define B_Lthm                                                  _______         _______

#define B_Rtop _______          _______         _______         _______         _______
#define B_Rmid _______          _______         _______         _______         _______
#define B_Rbtm _______          _______         _______         _______         _______
#define B_Rthm _______          _______

#define l_akC_label "l_akC"
#define C_Ltop _______          _______         _______         _______         _______
#define C_Lmid _______          _______         _______         _______         _______
#define C_Lbtm _______          _______         _______         _______         _______
#define C_Lthm                                                  _______         _______

#define C_Rtop _______          _______         _______         _______         _______
#define C_Rmid _______          _______         _______         _______         _______
#define C_Rbtm _______          _______         _______         _______         _______
#define C_Rthm _______          _______

#define l_akD_label "l_akD"
#define D_Ltop &kp J            _______         _______         _______         _______
#define D_Lmid _______          _______         _______         _______         &b_lk
#define D_Lbtm &kp V            &kp G           _______         _______         _______
#define D_Lthm                                                  _______         _______

#define D_Rtop _______          _______         _______         _______         _______
#define D_Rmid _______          _______         _______         _______         _______
#define D_Rbtm _______          _______         _______         _______         _______
#define D_Rthm _______          _______

#define l_akE_label "l_akE"
#define E_Ltop _______          _______         _______         _______         _______
#define E_Lmid _______          _______         _______         _______         _______
#define E_Lbtm _______          _______         _______         _______         _______
#define E_Lthm                                                  _______         _______

#define E_Rtop _______          _______         _______         _______         _______
#define E_Rmid _______          _______         _______         _______         &kp O
#define E_Rbtm _______          _______         _______         _______         _______
#define E_Rthm _______          _______

#define l_akF_label "l_akF"
#define F_Ltop _______          _______         _______         _______         _______
#define F_Lmid _______          _______         _______         _______         _______
#define F_Lbtm _______          &b_sp           _______         _______         _______
#define F_Lthm                                                  _______         _______

#define F_Rtop _______          _______         _______         _______         _______
#define F_Rmid _______          _______         _______         _______         _______
#define F_Rbtm _______          _______         _______         _______         _______
#define F_Rthm _______          _______

#define l_akG_label "l_akG"
#define G_Ltop _______          _______         &kp L           &b_lml          _______
#define G_Lmid _______          _______         _______         _______         _______
#define G_Lbtm _______          _______         _______         _______         _______
#define G_Lthm                                                  _______         _______

#define G_Rtop _______          _______         _______         _______         &t_Th
#define G_Rmid _______          _______         _______         _______         &b_lk
#define G_Rbtm _______          _______         _______         _______         _______
#define G_Rthm _______          _______

#define l_akH_label "l_akH"
#define H_Ltop _______          _______         _______         _______         _______
#define H_Lmid _______          _______         _______         _______         _______
#define H_Lbtm _______          _______         _______         _______         _______
#define H_Lthm                                                  _______         _______

#define H_Rtop _______         _______          _______         _______         _______
#define H_Rmid _______         _______          _______         _______         _______
#define H_Rbtm _______         _______          _______         _______         _______
#define H_Rthm _______         _______

#define l_akI_label "l_akI"
#define I_Ltop _______         _______          _______         _______         _______
#define I_Lmid _______         _______          _______         _______         _______
#define I_Lbtm _______         _______          _______         _______         _______
#define I_Lthm                                                  _______         _______

#define I_Rtop _______         _______          _______         _______         _______
#define I_Rmid _______         _______          _______         _______         _______
#define I_Rbtm _______         _______          _______         _______         _______
#define I_Rthm _______         _______

#define l_akJ_label "l_akJ"  // using l_akJ for Y as well
#define J_Ltop _______         _______          _______         &t_pg           _______
#define J_Lmid _______         _______          _______         _______         _______
#define J_Lbtm _______         _______          _______         _______         _______
#define J_Lthm                                                  _______         _______

#define J_Rtop _______         _______          _______         _______         _______
#define J_Rmid _______         _______          _______         _______         &kp SQT
#define J_Rbtm _______         _______          _______         _______         &kp I
#define J_Rthm _______         _______

#define l_akK_label "l_akK"
#define K_Ltop _______         &kp L            _______         _______         _______
#define K_Lmid _______         &kp N            _______         _______         _______
#define K_Lbtm _______         &kp L            _______         _______         _______
#define K_Lthm                                                  _______         _______

#define K_Rtop _______         _______          _______         _______         _______
#define K_Rmid _______         _______          _______         _______         _______
#define K_Rbtm _______         _______          _______         _______         _______
#define K_Rthm _______         _______

#define l_akM_label "l_akM"
#define M_Ltop &kp L            &b_lg           _______         _______         &kp L
#define M_Lmid _______          _______         _______         _______         _______
#define M_Lbtm _______          _______         _______         _______         _______
#define M_Lthm                                                  _______         _______

#define M_Rtop _______          _______         _______         _______         _______
#define M_Rmid _______          _______         _______         _______         &kp N
#define M_Rbtm _______          _______         _______         _______         _______
#define M_Rthm _______          _______

#define l_akO_label "l_akO"
#define O_Ltop _______          _______         _______         _______         _______
#define O_Lmid _______          _______         _______         _______         _______
#define O_Lbtm _______          _______         _______         _______         _______
#define O_Lthm                                                  _______         _______

#define O_Rtop _______          _______         _______         _______         _______
#define O_Rmid _______          _______         _______         _______         &kp E
#define O_Rbtm _______          _______         _______         _______         _______
#define O_Rthm _______          _______

#define l_akP_label "l_akP"
#define P_Ltop _______          _______         &kp L           _______         _______
#define P_Lmid _______          _______         _______         _______         _______
#define P_Lbtm &kp S            _______         _______         _______         _______
#define P_Lthm                                                  _______         _______

#define P_Rtop _______          _______         _______         _______         _______
#define P_Rmid _______          _______         _______         _______         _______
#define P_Rbtm _______          _______         _______         _______         _______
#define P_Rthm _______          _______

#define l_akT_label "l_akT"
#define T_Ltop _______          _______         _______         _______         _______
#define T_Lmid _______          &t_Ch           _______         _______         &b_ck
#define T_Lbtm _______          _______         _______         _______         _______
#define T_Lthm                                                  _______         _______

#define T_Rtop _______          _______         _______         _______         _______
#define T_Rmid _______          _______         _______         _______         _______
#define T_Rbtm _______          _______         _______         _______         _______
#define T_Rthm _______          _______

#define l_akU_label "l_akU"
#define U_Ltop _______          _______         _______         _______         _______
#define U_Lmid _______          _______         _______         _______         _______
#define U_Lbtm _______          _______         _______         _______         _______
#define U_Lthm                                                  _______         _______

#define U_Rtop _______          _______         _______         _______         _______
#define U_Rmid _______          _______         _______         _______         &kp A
#define U_Rbtm _______          _______         _______         _______         _______
#define U_Rthm _______          _______

#define l_akV_label "l_akV"
#define V_Ltop _______          _______         _______         _______         _______
#define V_Lmid _______          _______         _______         _______         _______
#define V_Lbtm _______          _______         &kp L           _______         _______
#define V_Lthm                                                  _______         _______

#define V_Rtop _______          _______         _______         _______         _______
#define V_Rmid _______          _______         _______         _______         _______
#define V_Rbtm _______          _______         _______         _______         _______
#define V_Rthm _______          _______

#define l_akW_label "l_akW"
#define W_Ltop _______          _______         _______         _______         _______
#define W_Lmid _______          _______         _______         _______         _______
#define W_Lbtm _______          _______         _______         _______         _______
#define W_Lthm                                                  _______         _______

#define W_Rtop _______          _______         _______         _______         _______
#define W_Rmid _______          _______         _______         _______         _______
#define W_Rbtm _______          _______         _______         _______         _______
#define W_Rthm _______          _______

#define l_akX_label "l_akX"
#define X_Ltop _______          &ak_xp          &kp L           _______         _______
#define X_Lmid _______          _______         _______         _______         _______
#define X_Lbtm _______          _______         _______         _______         _______
#define X_Lthm                                                  _______         _______

#define X_Rtop _______          _______         _______         _______         _______
#define X_Rmid _______          _______         _______         _______         _______
#define X_Rbtm _______          _______         _______         _______         _______
#define X_Rthm _______          _______

#define l_akDOT_label "l_akDOT"
#define DOT_Ltop _______        _______         _______         _______         _______
#define DOT_Lmid _______        _______         _______         _______         _______
#define DOT_Lbtm _______        _______         _______         _______         _______
#define DOT_Lthm                                                _______         _______

#define DOT_Rtop _______        &kp DOT         &t_dotcom       &t_dotedu       &t_dotorg
#define DOT_Rmid _______        _______         _______         _______         _______
#define DOT_Rbtm _______        _______         _______         _______         _______
#define DOT_Rthm _______        _______

#define l_akFSLH_label "l_akFSLH"
#define FSLH_Ltop _______       &b_EXCL         _______         &b_QMARK        _______
#define FSLH_Lmid _______       _______         _______         _______         _______
#define FSLH_Lbtm _______       _______         _______         _______         _______
#define FSLH_Lthm                                               _______         _______

#define FSLH_Rtop _______       _______         _______         _______         _______
#define FSLH_Rmid _______       _______         _______         _______         _______
#define FSLH_Rbtm _______       _______         _______         _______         _______
#define FSLH_Rthm _______       _______
