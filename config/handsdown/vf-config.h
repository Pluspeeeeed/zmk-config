#define _______  &trans

/*      Base (alpha) Layer Hands Down Vibranium-vf
                    34 keys (core)
 ╭─────────────────────╮ ╭──────────────────────╮
 │  X   W   M   G   J  │ │  #$  .:  /*  "<  '>  │
 │  S   C   N   T   K  | |  ,;   A   E   I   H  │
 │  F   P   L   D   V  │ │  -+   U   O   Y   B  │
 ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/

#define HD_adapt_file "handsdown/vf-adapt.dtsi"  // the related adaptive keys file
#define HD_combo_file "handsdown/vf-combos.dtsi" // the related combo file

#define HD_Layer_label "HD-Vf"
#define HD_LT &kp X           &kp W           &kp M           &kp G                   &kp J
#define HD_LM &mt RCTRL S     &mt RALT C      &mt RGUI N      &mt RSHFT T             &kp K
#define HD_LB &kp F           &kp P           &kp L           &kp D                   &kp V
#define HD_LH                                                 &lt l_fun BACKSPACE     &lt l_nav R

#define HD_RT &kp HASH       &kp DOT         &kp FSLH        &kp DQT         &kp SQT
#define HD_RM &kp COMMA      &mt LSHFT A     &mt LGUI E      &mt LALT I      &mt LCTRL H
#define HD_RB &kp MINUS      &kp U           &kp O           &kp Y           &kp B
#define HD_RH &lt l_sym SPACE &lt l_nav RETURN