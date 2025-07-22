//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//

/*    KEY POSITION Numbers for BandWings (3x5+3)
 ╭────────────────────╮ ╭────────────────────╮
 │  0   1   2   3   4 │ │  5   6   7   8   9 │
 │ 10  11  12  13  14 │ │ 15  16  17  18  19 |
 | 20  21  22  23  24 │ │ 25  26  27  28  29 |
 ╰───────╮ 30  31  32 | | 32  33  34 ╭───────╯
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

// define the key names for this board
#define LT0 4
#define LT1 3
#define LT2 2
#define LT3 1
#define LT4 0
#define RT0 5
#define RT1 6
#define RT2 7
#define RT3 8
#define RT4 9

#define LM0 14
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10
#define RM0 15
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LB0 24
#define LB1 23
#define LB2 22
#define LB3 21
#define LB4 20
#define RB0 25
#define RB1 26
#define RB2 27
#define RB3 28
#define RB4 29

#define LH3 30
#define LH1 32
#define LH2 31
#define RH1 33
#define RH2 34
#define RH3 35

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys
#define THUMBS LH3 LH2 LH1 RH1 RH2 RH3                                      // thumb keys
