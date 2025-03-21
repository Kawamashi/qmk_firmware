/* Copyright 2020 Guillaume Gérard
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* French AZERTY - AFNOR NF Z71-300
 *
 * A standard for the French keyboard
 *
 * The project was launched at the end of 2015 on the proposal of the General
 * Delegation for the French language and the languages ​​of France (Ministry
 * of Culture), starting from the observation that the current "azerty"
 * keyboards constrain the writing of French, languages regional and European
 * languages ​​with Latin alphabet.
 *
 * For the first time, a standard (NF Z71-300) defines the placement of
 * characters on the French keyboard. It offers two layouts, one of which
 * closely follows the QWERTY keyboard used by most people who write in French.
 *
 * However, it is in many ways superior to the old keyboard:
 *
 * - it contains all the characters required to enter text in French (for example É, œ and ")
 * - it is designed to be more ergonomic and allow faster typing
 * - it includes almost 60 additional characters for entering foreign languages, technical content, etc
 * - however, the characters remain easy to locate thanks to intuitive groupings
 *
 * Source: https://norme-azerty.fr
 */

#pragma once
#include "keycodes.h"
//#include "keymap.h"

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ @ │ à │ é │ è │ & │ ( │ ) │ ç │ ’ │ « │ » │ ' │ ^ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ - │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ / │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ . │ , │ " │ = │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_AROB KC_GRV  // @
#define FR_AGRV KC_1    // à
#define FR_EACU KC_2    // é
#define FR_EGRV KC_3    // è
#define FR_ESPR KC_4    // &
#define FR_LPRN KC_5    // (
#define FR_RPRN KC_6    // )
#define FR_CCED KC_7    // ç
#define FR_RSQU KC_8    // ’
#define FR_LDAQ KC_9    // «
#define FR_RDAQ KC_0    // »
#define FR_APOS KC_MINS // '
#define FR_ACIR KC_EQL  // ^ (dead)
// Row 2
#define FR_A    KC_Q    // A
#define FR_Z    KC_W    // Z
#define FR_E    KC_E    // E
#define FR_R    KC_R    // R
#define FR_T    KC_T    // T
#define FR_Y    KC_Y    // Y
#define FR_U    KC_U    // U
#define FR_I    KC_I    // I
#define FR_O    KC_O    // O
#define FR_P    KC_P    // P
#define FR_MOIN KC_LBRC // -
#define FR_PLUS KC_RBRC // +
// Row 3
#define FR_Q    KC_A    // Q
#define FR_S    KC_S    // S
#define FR_D    KC_D    // D
#define FR_F    KC_F    // F
#define FR_G    KC_G    // G
#define FR_H    KC_H    // H
#define FR_J    KC_J    // J
#define FR_K    KC_K    // K
#define FR_L    KC_L    // L
#define FR_M    KC_SCLN // M
#define FR_SLSH KC_QUOT // /
#define FR_ASTX KC_NUHS // *
// Row 4
#define FR_INF  KC_NUBS // <
#define FR_W    KC_Z    // W
#define FR_X    KC_X    // X
#define FR_C    KC_C    // C
#define FR_V    KC_V    // V
#define FR_B    KC_B    // B
#define FR_N    KC_N    // N
#define FR_POIN KC_M    // .
#define FR_VIRG KC_COMM // ,
#define FR_DQUO KC_DOT  // ""
#define FR_EGAL KC_SLSH // =

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ # │ À │ É │ È │ ° │ [ │ ] │ Ç │ 8 │ 9 │ 0 │ ? │ ¨ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ – │ ± │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ \ │ ½ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ : │ ! │ … │ ≠ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_HASH S(FR_AROB) // #
//#define FR_1    S(FR_AGRV) // 1
//#define FR_2    S(FR_EACU) // 2
//#define FR_3    S(FR_EGRV) // 3
#define FR_DEG  S(FR_ESPR) // 4
#define FR_LBKT S(FR_LPRN) // 5
#define FR_RBKT S(FR_RPRN) // 6
//#define FR_7    S(FR_CCED) // 7
#define FR_8    S(FR_RSQU) // 8
#define FR_9    S(FR_LDAQ) // 9
#define FR_0    S(FR_RDAQ) // 0
#define FR_QUES S(FR_APOS) // ?
#define FR_TREM S(FR_ACIR) // ¨ (dead)
// Row 2
#define FR_NDSH S(FR_MOIN) // –
#define FR_PLMN S(FR_PLUS) // ±
// Row 3
#define FR_BSLS S(FR_SLSH) // (backslash)
#define FR_HALF S(FR_ASTX) // ½
// Row 4
#define FR_SUP  S(FR_INF) // >
#define FR_2PTS S(FR_POIN)  // :
#define FR_EXLM S(FR_VIRG) // !
//#define FR_3PTS S(FR_DQUO) // …
#define FR_DIFF S(FR_EGAL) // ≠

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ˘ │ § │ ´ │ ` │   │ { │ } │ ¯ │ _ │ “ │ ” │ ˚ │ ˇ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ æ │ £ │ € │ ® │ { │ } │ ù │ ˙ │ œ │ % │ − │ † │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ θ │ ß │ $ │ ¤ │ µ │ Eu│   │ ∕ │ | │ ∞ │ ÷ │ × │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ≤ │ ʒ │ © │ ç │ ¸ │ − │ ~ │ … │ ; │ · │ ≃ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_BREV ALGR(FR_AROB)   // ˘ (dead)
#define FR_SECT ALGR(FR_AGRV) // §
#define FR_ACUT ALGR(FR_EACU) // ´ (dead)
#define FR_GRV  ALGR(FR_EGRV) // ` (dead)
//#define FR_AMPR ALGR(FR_ESPR) // &
#define FR_LACL ALGR(FR_LPRN) // {
#define FR_RACL ALGR(FR_RPRN) // }
#define FR_MACR ALGR(FR_CCED) // ¯ (dead)
#define FR_UNDS ALGR(FR_RSQU) // _
#define FR_LDQU ALGR(FR_LDAQ) // “
#define FR_RDQU ALGR(FR_RDAQ) // ”
#define FR_RNGA ALGR(FR_APOS) // ˚ (dead)
#define FR_CARN ALGR(FR_ACIR) // ˇ (dead)
// Row 2
#define FR_AE   ALGR(FR_A)    // æ
#define FR_PND  ALGR(FR_Z)    // £
#define FR_EURO ALGR(FR_E)    // €
#define FR_REGD ALGR(FR_R)    // ®
#define FR_LCBR ALGR(FR_T)    // {
#define FR_RCBR ALGR(FR_Y)    // }
#define FR_UGRV ALGR(FR_U)    // ù
#define FR_DOTA ALGR(FR_I)    // ˙ (dead)
#define FR_OE   ALGR(FR_O)    // œ
#define FR_PERC ALGR(FR_P)    // %
#define FR_MMNS ALGR(FR_MOIN) // −
#define FR_DAGG ALGR(FR_PLUS) // †
// Row 3
#define FR_THET ALGR(FR_Q)    // θ
#define FR_SS   ALGR(FR_S)    // ß
#define FR_DLR  ALGR(FR_D)    // $
#define FR_CURR ALGR(FR_F)    // ¤ (dead monetary key)
#define FR_DGRK ALGR(FR_G)    // µ (dead Greek key)
#define FR_EU   ALGR(FR_H)    // Eu (dead European symbol key)
#define FR_DSLS ALGR(FR_K)    // ∕ (dead)
#define FR_PIPE ALGR(FR_L)    // |
#define FR_INFN ALGR(FR_M)    // ∞
#define FR_DIV  ALGR(FR_SLSH) // ÷
#define FR_MUL  ALGR(FR_ASTX) // ×
// Row 4
#define FR_LEQL ALGR(FR_INF) // ≤
#define FR_EZH  ALGR(FR_W)    // ʒ
#define FR_COPY ALGR(FR_X)    // ©
//#define FR_CCED ALGR(FR_C)    // ç
#define FR_CEDL ALGR(FR_V)    // ¸ (dead)
#define FR_DMNS ALGR(FR_B)    // − (dead)
#define FR_TILD ALGR(FR_N)    // ~ (dead)
#define FR_3PTS ALGR(FR_POIN)  // ¿
#define FR_PVIR ALGR(FR_VIRG) // ;
#define FR_MDDT ALGR(FR_DQUO) // ·
#define FR_AEQL ALGR(FR_EGAL) // ≃

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │  ̑ │   │   │   │   │ ˝ │  ̏ │   │ — │ ‹ │ › │ ¿ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │ ™ │   │   │  ̣ │   │ ‰ │ ‑ │ ‡ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │ ˍ │   │   │   │   │ √ │ ¼ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ≥ │   │   │   │ ˛ │   │   │   │ ¡ │   │ ≠ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_IBRV S(ALGR(FR_AROB))   //  ̑ (dead)
#define FR_DACU S(ALGR(FR_LPRN)) // ˝ (dead)
#define FR_DGRV S(ALGR(FR_RPRN)) //  ̏ (dead)
#define FR_MDSH S(ALGR(FR_RSQU)) // —
#define FR_LSAQ S(ALGR(FR_LDAQ)) // ‹
#define FR_RSAQ S(ALGR(FR_RDAQ)) // ›
#define FR_IQUE S(ALGR(FR_APOS)) // ¿
// Row 2
#define FR_TM   S(ALGR(FR_T))    // ™
#define FR_DOTB S(ALGR(FR_I))    //  ̣ (dead)
#define FR_PERM S(ALGR(FR_P))    // ‰
#define FR_NBHY S(ALGR(FR_MOIN)) // ‑ (non-breaking hyphen)
#define FR_DDAG S(ALGR(FR_PLUS)) // ‡
// Row 3
#define FR_MACB S(ALGR(FR_H))    // ˍ (dead)
#define FR_SQRT S(ALGR(FR_SLSH)) // √
#define FR_QRTR S(ALGR(FR_ASTX)) // ¼
// Row 4
#define FR_GEQL S(ALGR(FR_INF)) // ≥
#define FR_OGON S(ALGR(FR_V))    // ˛ (dead)
#define FR_IEXL S(ALGR(FR_VIRG)) //  ̦ (dead)
//#define FR_NEQL S(ALGR(FR_EGAL)) // ≠
