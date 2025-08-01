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

// Japanese "mode" (no adaptives, & L, C, X not used so repurpose to ん, Z, -)
#define JP_Layer_label "HD-JP"
#define JP_LT &kp MINUS       &kp W           &kp M           &kp G           &kp J
#define JP_LM &mt RCTRL S     &mt RALT Z      &mt RGUI N      &mt RSHFT T     &kp K
#define JP_LB &kp F           &kp P           _______           &kp D           &kp V
#define JP_LH                                                 _______         &lt l_nav R

#define JP_RT _______        _______      _______      &kp LBKT        &kp RBKT
#define JP_RM _______         &mt LSHFT A    &mt LGUI E     &mt LALT I     &mt LCTRL H
#define JP_RB _______         &kp U           &kp O           &kp Y           &kp B
#define JP_RH _______         _______


#define l_akDOT_label "l_akDOT"
#define DOT_LT _______        _______         _______         _______         _______
#define DOT_LM _______        _______         _______         _______         _______
#define DOT_LB _______        _______         _______         _______         _______
#define DOT_LH                                                _______         _______

#define DOT_RT &kp DLLR       &kp DOT         _______       _______       _______
#define DOT_RM &caps_word     _______         _______         _______         _______
#define DOT_RB _______        _______         _______         _______         _______
#define DOT_RH _______        _______
