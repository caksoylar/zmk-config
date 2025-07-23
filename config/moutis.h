//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//
#define H_DIGRAPH_COMBOS //  (th, ch, sh, wh, gh, ph)
#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
#define COMMA_CAP     // , before alpha capitalizes that alpha

#define my_tapping_term 200
#define my_quick_tapping_term 55
#define my_ak_delay 50

// my layers
#define l_any   -1 // for combos on any layer

enum mylayers {
    l_alpha, // 1 - Hands Down Alpha layer
    l_japan, // alternate base layer in Jmode
    l_akA,
    l_akB,
    l_akC,
    l_akD,
    l_akE,
    l_akF,
    l_akG,
    l_akH,
    l_akI,
    l_akJ,
    l_akK,
    l_akM,
    l_akO,
    l_akP,
    l_akT,
    l_akU,
    l_akV,
    l_akW,
    l_akX,
    l_akDot,
    l_akFSLH,
    l_sym,  // 2 - symbols, punctuation, off-map alphas (Z, Q, etc.)
    l_num,  // 3 - function (left), numbers (right)
    l_fun,  // 4 - navpad (left), numpad (right);
    l_nav,  // 5 - meta keys (left), nav pad (right)
    l_cfg   // 6 - Keyboard settings, Media/Consumer controls
};
