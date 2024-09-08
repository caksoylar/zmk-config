//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//

#define H_DIGRAPH_COMBOS //  (th, ch, sh, wh, gh, ph)
#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
#define COMMA_CAP     // , before alpha capitalizes that alpha

#define my_tapping_term 170
#define my_quick_tapping_term 112
#define my_ak_delay 40

// my layers
#define l_any   -1
#define l_alpha 0
#define l_akG   1
#define l_akM   2
#define l_akX   3
#define l_akT   4
#define l_akC   5
#define l_akK   6
#define l_akD   7
#define l_akW   8
#define l_akF   9
#define l_akP   10
#define l_akB   11
#define l_akV   12
#define l_akJ   13
#define l_akA   14
#define l_akU   15
#define l_akE   16
#define l_akO   17
#define l_akI   18
#define l_akDot 19
#define l_sym   20
#define l_num   21
#define l_fun   22
#define l_nav   23
#define l_cfg   24

&mt {
    tapping-term-ms = <my_tapping_term>;
};
&sl {
    release-after-ms = <my_tapping_term>;
};
&caps_word {
    continue-list = <UNDER MINUS BSPC DEL LEFT RIGHT>;
};
