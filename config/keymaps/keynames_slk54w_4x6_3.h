/*
 * keynames_4x6_3.h
 *
 *
 * Key Position Names for a 4x6+3 (54 key) Silakka54 wireless form factor
 *
 *
 *                       UNIVERSAL KEY POSITION NAMES
 *          alphas & combos should be limited to 3x5+2 common core
 *
 *   0     1   2   3   4  5                        6   7   8   9  10    11
 *     ╭─────────────────────╮                  ╭─────────────────────╮
 *  12 │  13  14  15  16  17 │                  │ 18  19  20  21  22  │ 23
 *  24 │  25  26  27  28  29 │                  │ 30  31  32  33  34  │ 35
 *  36 │  37  38  39  40  41 │                  │ 42  43  44  45  46  │ 47
 *     ╰────────╮ 48  49  50 │                  │ 51  52  53 ╭────────╯
 *              ╰────────────╯                  ╰────────────╯
 *
 * NRA   NR1 NR2 NR3 NR4 NR5                      NR6 NR7 NR8 NR9 NR0   NRB
 *     ╭─────────────────────╮                  ╭─────────────────────╮
 * LT5 │ LT4 LT3 LT2 LT1 LT0 │                  │ RT0 RT1 RT2 RT3 RT4 │ RT5
 * LM5 │ LM4 LM3 LM2 LM1 LM0 │                  │ RM0 RM1 RM2 RM3 RM4 │ RM5
 * LB5 │ LB4 LB3 LB2 LB1 LB0 │ LBA          RBA │ RB0 RB1 RB2 RB3 RB4 │ RB5
 *     ╰────────╮LH2 LH1 LH0 │ LHA          RHA │ RH0 RH1 RH2╭────────╯
 * LH5  LH4 LH3 ╰────────────╯                  ╰────────────╯ RH3 RH4  LH5
*/

#pragma once

#define NRA 0
#define NR1 1
#define NR2 2
#define NR3 3
#define NR4 4
#define NR5 5

#define NR6 6
#define NR7 7
#define NR8 8
#define NR9 9
#define NR0 10
#define NRB 11

#define LT5 12
#define LT4 13
#define LT3 14
#define LT2 15
#define LT1 16
#define LT0 17


// left-top row
#define RT0 18
#define RT1 19
#define RT2 20
#define RT3 21
#define RT4 22
#define RT5 23

// left-middle row
#define LM5 24
#define LM4 25
#define LM3 26
#define LM2 27
#define LM1 28
#define LM0 29

// right-middle row
#define RM0 30
#define RM1 31
#define RM2 32
#define RM3 33
#define RM4 34
#define RM5 35

// left-bottom row
#define LB5 36
#define LB4 37
#define LB3 38
#define LB2 39
#define LB1 40
#define LB0 41

// right-bottom row
#define RB0 42
#define RB1 43
#define RB2 44
#define RB3 45
#define RB4 46
#define RB5 47

// left thumb keys
#define LH2 48
#define LH1 49
#define LH0 50

// right thumb keys
#define RH0 51
#define RH1 52
#define RH2 53

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys
#define THUMBS  LH2 LH1 LH0 RH0 RH1 RH2                                     // thumb keys