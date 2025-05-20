/*                                      42 KEY MATRIX / LAYOUT MAPPING
       ╭───╮                                ╭───╮          ╭───╮                                 ╭───╮
  ╭────╯ 0 ╰───────────────┬────────────────╯ 0 ╰───╮ ╭────╯LN0╰────────────────┬────────────────╯RN0╰────╮
  │  2   3   4   5   6   7 │ 8   9   10  11  12  13 │ │ LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 14  15  16  17  18  19 │ 20  21  22  23  24  25 │ │ LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 │
  ╰───╮ 26  27  28  29  30 │ 31  32  33  34  35 ╭───╯ ╰───╮ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 ╭───╯
      ╰───────╮ 36  37  38 │ 39  40  41 ╭───────╯         ╰───────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────╯    
              ╰────────────┴────────────╯                         ╰─────────────┴─────────────╯             */

#pragma once

#define LN0  0
#define RN0  1

#define LT0  7  // left-top row
#define LT1  6
#define LT2  5
#define LT3  4
#define LT4  3
#define LT5  2

#define RT0  8  // right-top row
#define RT1  9
#define RT2 10
#define RT3 11
#define RT4 12
#define RT5 13

#define LM0 19  // left-middle row
#define LM1 18
#define LM2 17
#define LM3 16
#define LM4 15
#define LM5 14

#define RM0 20  // right-middle row
#define RM1 21
#define RM2 22
#define RM3 23
#define RM4 24
#define RM5 25

#define LB0 30  // left-bottom row
#define LB1 29
#define LB2 28
#define LB3 27
#define LB4 26


#define RB0 31  // right-bottom row
#define RB1 32
#define RB2 33
#define RB3 34
#define RB4 35

#define LH0 38  // left thumb keys
#define LH1 37
#define LH2 36

#define RH0 39  // right thumb keys
#define RH1 40
#define RH2 41

