//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//


/*       KEY POSITIONS for Corne-ish Zen
    ╭─────────────────────╮ ╭─────────────────────╮
  0 │   1   2   3   4  5  │ │  6   7   8   9  10  │ 11
 12 │  13  14  15  16  17 | | 18  19  20  21  22  │ 23
 24 │  25  26  27  28  29 │ │ 30  31  32  33  34  │ 35
    ╰────────╮ 36  37  38 │ │ 39  40  41 ╭────────╯
             ╰────────────╯ ╰────────────╯
*/
/*    KEY POSITION Names
    ╭─────────────────────╮ ╭─────────────────────╮
LT5 │ LT4 LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3 RT4 │ RT5
LM5 │ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 │ RM5
LB5 │ LB4 LB3 LB2 LB1 LB0 │ │ RB0 RB1 RB2 RB3 RB4 │ RB5
    ╰───────╮ LH3 LH2 LH1 | | RH1 RH2 RH3 ╭───────╯
            ╰─────────────╯ ╰─────────────╯
*/
/*  Base (alpha) Layer  Hands Down Vibranium-vv
    Building for a 36/42 key board
    ╭─────────────────────╮ ╭──────────────────────╮
LT5 │  X   W   M   G  "[  │ │  #$  .:  ']   J   B  │ RT5
LM5 │  S   C   N   T   K  | |  ,;   A   E   I   H  │ RM5
LB5 │  V   P   L   D   /* │ │  -+   U   O   Y   F  │ RB5
    ╰──────╮  App BSP  R  │ │  SPC RET  TAB ╭──────╯
           ╰──────────────╯ ╰───────────────╯
*/
#define LT0 5
#define LT1 4
#define LT2 3
#define LT3 2
#define LT4 1
#define LT5 0
#define RT0 6
#define RT1 7
#define RT2 8
#define RT3 9
#define RT4 10
#define RT5 11

#define LM0 17
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
#define LM5 12
#define RM0 18
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

#define LB0 29
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
#define LB5 24
#define RB0 30
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

#define LH3 38
#define LH1 36
#define LH2 37
#define RH1 39
#define RH2 40
#define RH3 41

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys
#define THUMBS LH3 LH2 LH1 RH1 RH2 RH3                                      // thumb keys

// my layers

#define l_any   -1
#define l_alpha 0
#define l_akG   1
#define l_akM   2
#define l_akX   3
#define l_akT   4
#define l_akK   5
#define l_akD   6
#define l_akW   7
#define l_akF   8
#define l_akB   9
#define l_akV   10
#define l_akA   11
#define l_akU   12
#define l_akE   13
#define l_akO   14
#define l_akI   15
#define l_akJ   16
#define l_akDot 17
#define l_nav   18
#define l_sym   19
#define l_fn    20
#define l_num   21
#define l_cfg   22

#define my_tapping_term 170
#define my_quick_tapping_term 112
#define my_ak_delay 40

&mt {
    tapping-term-ms = <my_tapping_term>;
};
&sl {
    release-after-ms = <my_tapping_term>;
};
&caps_word {
    continue-list = <UNDER MINUS BSPC DEL LEFT RIGHT>;
};


#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
