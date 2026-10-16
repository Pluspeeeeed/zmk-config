/*

    Core/common layer defs for 3x5_2 (34) keys.

 */

//                                       Symbol & math (Windows)
//  * left paired symbols are "linger keys" via hold taps. Tap for left, hold for pair with insertion point between
//  * CONVERTED FROM macOS (2026-10): 原版这一层是 Mac 的 Option 组合 (LA()/RA())，
//    在 Windows 上按下去不产生任何字符（LA 只是 Alt，RA 在右手）。
//    已全部换成 Windows 原生可打出的 ASCII 符号。
//  * ⚠️ Windows 标准键盘没有 § ¶ • ¢ € £ ¥ ¡ ° · … 的键位，固件无法产生它们。
//    本层改用最接近的 ASCII：§→%  ¶→^  •→\  ·→]  °→@。
//    若你要真正的这些字符，两条路见本文件末尾"待你决定"。
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|    `   |    ~   |   %   |   ^   |    $    |                |   \    |    $   |   =    |   #    |   %    |
//|    [   |    [   |   (    |   {   |    ]    |                |   /    |    =   |   *    |   +    |   -    |
//|    ]   |    ]   |   )    |   }   |   @     |                |   ^    |    |   |   &    |   <    |   >    |
//╰──────────────────────────╮ C/BS |  C/DEL |                | &none  |   C/\   ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_sym_label "l_sym-win"

// --- left hand ---------------------------------------------------------------
#define l_sym_LT &kp Z              &kp Q               &kp LBRC            &kp CARET           &kp DLLR
//                 原 LA(LS(N9))·   LA(LS(N5))†      LA(LS(N7))‡      LA(N7)¶         (本来就是 $)

#define l_sym_LM &kp LBKT           &lk_bkt RBKT LBKT   &lk_par RPAR LPAR   &lk_brc RBRC LBRC   &kp LPAR
//                 原 LA(N5)§       [                (                 {                 LA(N8)•

#define l_sym_LB &kp STAR           &kp UNDER           &kp RPAR            &kp RBRC            &kp AT
//                 原 LA(LS(N8))°   ]                )                 }                 (原本是空位)

#define l_sym_LH &m_bsdel            &m_deldel
//                 删前一个词        删后一个词
//                 原为 LA(BSPC) / LA(DEL) = Mac 的 ⌥⌫ / ⌥⌦
//                 → Windows 等价键是 Ctrl+Backspace / Ctrl+Delete（用宏实现，见 moutis_macros.dtsi）
// -----------------------------------------------------------------------------

// --- right hand --------------------------------------------------------------
#define l_sym_RT &kp BSLH           &kp MINUS           &kp EQUAL           &kp HASH            &kp PRCNT
//                 原 RA(N4)¢       $                LA(LS(N2))€       LA(N3)£           RA(Y)¥
//                 ¢ € £ ¥ 在 Windows 无原生键位。若需要，见文件末尾"待你决定"（Alt 码方案）。

#define l_sym_RM &kp FSLH           &mt RSHFT EQUAL      &mt RGUI STAR       &mt RALT PLUS       &mt LCTRL MINUS

#define l_sym_RB &kp PLUS           &kp PIPE            &kp AMPS            &lk_ltgt GT LT      &kp GT

#define l_sym_RH &none              &m_ctrlbslh
//                 (原本空位)        原 LA(N1)¡ → ¡ 无原生键位；此位改为 Ctrl+\
// -----------------------------------------------------------------------------

//                                        Nav & NumPad (standard)
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|   Top   |  HOME  |   UP   | PG_UP |   ¶up   |                |    /   |   7    |   8    |   9    |    -   |
//|  Lword  |  LEFT  |  DOWN  |  RGT  |  Rword  |                |    *   |  S/4   |  G/5   |  A/6   |   C/+  |
//|   Bot   |   END  |   SPC  | PG_DN |   ¶dn   |                |    ,   |   1    |   2    |   3    |    =   |
//╰──────────────────────────╮  BSPC  |KP_ENTER |                |    0   |   .    ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_num_label "l_num"

#define l_num_LT &m_docstart          &kp HOME            &kp UP              &kp PG_UP           &m_paraup
//                 原 LG(UP)=⌘↑ 文档首 → Windows Ctrl+Home；原 LA(UP)=⌥↑ 段落上 → Windows Ctrl+↑
#define l_num_RT &kp KP_DIVIDE      &kp KP_N7           &kp KP_N8           &kp KP_N9           &kp KP_SUBTRACT

#define l_num_LM &m_wordl            &kp LEFT            &kp DOWN            &kp RIGHT           &m_wordr
//                 原 LA(LEFT)=⌥← / LA(RIGHT)=⌥→ 按词移动 → Windows Ctrl+← / Ctrl+→
#define l_num_RM &kp KP_MULTIPLY    &mt RSHFT KP_N4     &mt RGUI KP_N5      &mt RALT KP_N6      &mt LCTRL KP_PLUS

#define l_num_LB &m_docend           &kp END             &kp SPACE           &kp PG_DN           &m_paradn
//                 原 LG(DOWN)=⌘↓ 文档尾 → Windows Ctrl+End；原 LA(DOWN)=⌥↓ 段落下 → Windows Ctrl+↓
#define l_num_RB &kp KP_COMMA       &kp KP_N1           &kp KP_N2           &kp KP_N3           &kp KP_EQUAL

#define l_num_LH &lt l_fun BSPC     &lt l_nav KP_ENTER
#define l_num_RH &kp KP_N0          &kp KP_DOT

//                                         Fkey & Num Row (optimized)
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|    F9   |  F10   |  F11   |  F12   |  F13   |                |    /   |   7    |    8   |   9    |    -   |
//|   C/F5  |  A/F6  |  G/F7  |  S/F8  |  F14   |                |    *   |  S/1   |   G/2  |  A/3   |   C/+  |
//|    F1   |   F2   |   F3   |   F4   |  F15   |                |    ,   |   4    |    5   |   6    |    =   |
//╰──────────────────────────╮  BKSP   |   DEL  |                |    0   |   .    ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_fun_label "l_fn"

#define l_fun_LT &kp F9             &kp F10             &kp F11             &kp F12             &kp F13
#define l_fun_RT &kp FSLH           &kp N7              &kp N8              &kp N9              &kp MINUS

#define l_fun_LM &mt LCTRL F5       &mt LALT F6         &mt LGUI F7         &mt LSHFT F8        &kp F14
#define l_fun_RM &kp STAR           &mt RSHFT N1        &mt RGUI N2         &mt RALT N3         &mt LCTRL PLUS

#define l_fun_LB &kp F1             &kp F2              &kp F3              &kp F4              &kp F15
#define l_fun_RB &kp COMMA          &kp N4              &kp N5              &kp N6              &kp EQUAL

#define l_fun_LH &kp BSPC           &kp DEL
#define l_fun_RH &kp N0             &kp DOT

//                                           Shorcuts & Navigation (Windows)
//  ⚠️ 原版整层是 macOS 的 ⌘ 快捷键。Windows 上 LG() = Win 键（会弹开始菜单），已全部改为 Ctrl。
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|  close |   quit  |  Save  | ScrSh  |  Find   |                |   Top   |  HOME  |   UP   |  PG_UP |  ¶up   |
//|  ctrl  |   alt   |  gui   |  shft  |  Find   |                |  Lword  |  LEFT  |  DOWN  |   RGT  | Rword  |
//|  undo  |   cut   |  copy  |  pste  | findAgn |                |   Botm  |   END  |  DOWN  |  PG_DN |  ¶dn   |
//╰──────────────────────────╮ APPSW |   APPSW  |                |  back   |  fwd  ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_nav_label "l_nav"

#define l_nav_LT &m_close            &m_winclose           &m_save              &kp LS(TAB)           &m_find
//                 原 RG(Q) 关窗   原 RG(W) 退出         原 LG(LS(N4)) 截图   原 LG(LS(LC(N4)))    原 RG(F) 查找
//                 → Windows: Ctrl+W / Alt+F4 / Ctrl+S / Ctrl+Shift+Tab / Ctrl+F
//                 ⚠️ 原第 4 个是 Mac 的 ⌘⇧⌃4 区域截图，Windows 无对应；改成了 Ctrl+Shift+Tab（上一个标签页）

#define l_nav_RT &m_docstart          &kp HOME              &kp UP              &kp PG_UP             &m_paraup
//                 原 LG(UP) 文档首 → Ctrl+Home；原 LA(UP) 段落上 → Ctrl+↑

#define l_nav_LM &kp LCTRL            &kp LALT              &kp LGUI            &kp LSHFT             &m_find
//                 这四个是纯修饰键，Windows 下无需改（LGUI 就是 Win 键，这里是故意的）

#define l_nav_RM &m_wordl             &kp LEFT              &kp DOWN            &kp RIGHT             &m_wordr
//                 原 LA(LEFT)/LA(RIGHT) 按词 → Windows Ctrl+← / Ctrl+→

#define l_nav_LB &m_undo              &m_cut                &m_copy             &m_paste              &kp F3
//                 原 RG(Z)(X)(C)(V) ⌘Z/X/C/V → Windows Ctrl+Z / Ctrl+X / Ctrl+C / Ctrl+V
//                 原 RG(G) = ⌘G 查找下一个 → Windows 用 F3

#define l_nav_RB &m_docend            &kp END               &kp DOWN            &kp PG_DN             &m_paradn
//                 原 LG(DOWN) 文档尾 → Ctrl+End；原 LA(DOWN) 段落下 → Ctrl+↓

#define l_nav_LH &none          &none
#define l_nav_RH &m_pgback            &m_pgfwd
//                 原 LG(LBKT)/LG(RBKT) = ⌘[ / ⌘] 前进后退 → Windows Ctrl+[ / Ctrl+]

//                                          Keyboard & System Settings
//                      L_CFG Keyboard Configuration (left) and Media Settings (right)
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//│  BT3     BT2      BT1      BT0      BT_Clr  │                │ ZOOMRST none    none    KILL-W  KILL-M     │
//│  HD_AKTg L_0      L_1      KC_VOLU  KC_BRIU |                | ZOOMOUT KC_MPRV KC_MUTE KC_MNXT KC_NO      │
//│  QK_BOOT AG_SWAP  AG_NORM  KC_VOLD  KC_BRID │                │ ZOOMIN  KC_MRWD KC_MPLY KC_MFFD QK_BOOT    │
//╰──────────────────────────╮ ZOOMOUT  ZOOMIN  │                │ ZOOMIN  ZOOMOUT ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_cfg_label "l_cfg"

#define l_cfg_LT &bt BT_SEL 3       &bt BT_SEL 2        &bt BT_SEL 1        &bt BT_SEL 0        &bt BT_CLR
#define l_cfg_RT &m_zoomrst         &none               &none               &m_winclose         &m_taskmgr
//                 原 LG(N0) 缩放归位 → Windows Ctrl+0
//                 原 LC(LA(DEL)) Mac 强制注销 → Windows 无对应，改为 Alt+F4（关当前窗口）
//                 原 LG(LA(ESCAPE)) Mac 强制退出 → Windows 改为 Ctrl+Shift+Esc（任务管理器）

#define l_cfg_LM &none              &kp C_NEXT          &kp C_PP            &kp C_VOL_UP        &kp C_BRI_UP
#define l_cfg_RM &m_zoomin          &kp C_VOL_UP        &kp C_MUTE          &kp C_NEXT          &none
//                 原 LG(EQUAL) ⌘= 放大 → Windows Ctrl+=

#define l_cfg_LB &rst_btld          &kp C_PREV          &kp C_MUTE          &kp C_VOL_DN        &kp C_BRI_DN
#define l_cfg_RB &m_zoomout         &kp C_VOL_DN        &kp C_PP            &kp C_PREV          &rst_btld
//                 原 LG(MINUS) ⌘- 缩小 → Windows Ctrl+-

#define l_cfg_LH &m_zoomin          &m_zoomout
#define l_cfg_RH &m_zoomout         &m_zoomin
//                 原 LG(EQUAL)/LG(MINUS) → Windows Ctrl+= / Ctrl+-