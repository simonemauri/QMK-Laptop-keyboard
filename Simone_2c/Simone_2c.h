/* Copyright 2021 Sim-1
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


#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
  K01, K10, K12, K02, K13, K03, K04, K05, K16, K06, K07, K08, K18, K19, K1A, K77, K6A, \
  K20, K70, K22, K73, K23, K24, K14, K25, K15, K17, K28, K79, K29, K2A, K59, \
  K30, K72, K32, K33, K34, K74, K35, K75, K26, K27, K78, K38, K7A, K3A, K4A, \
  K40, K50, K42, K43, K54, K44, K45, K76, K36, K37, K5A, K66, K49,      K5B, \
  K11, K39, K60, K51, K53, K62, K63, K55, K46, K56, K57, K58, K41,      K09, \
  K21, K00, K31, K52,           K64,           K61, K65, K71, K47, K48, K67, \
                                                              K68, K69, K7B  \
) \
{ \
/* 0 */  { K00, K01, XXX, XXX, XXX, K02, XXX, K03, K04, K05, K06, XXX, K07, K08, XXX, K09, XXX, XXX }, \
/* 1 */  { XXX, K10, K11, XXX, XXX, K12, XXX, K13, K14, K15, K16, XXX, K17, K18, K19, K1A, XXX, XXX }, \
/* 2 */  { XXX, K20, XXX, K21, XXX, K22, XXX, K23, K24, K25, K26, XXX, K27, K28, K29, K2A, XXX, XXX }, \
/* 3 */  { XXX, K30, XXX, XXX, K31, K32, XXX, K33, K34, K35, K36, XXX, K37, K38, K39, K3A, XXX, XXX }, \
/* 4 */  { XXX, K40, K41, XXX, XXX, K42, XXX, K43, K44, K45, K46, XXX, K47, XXX, K48, K49, K4A, XXX }, \
/* 5 */  { XXX, K50, XXX, XXX, XXX, K51, K52, K53, K54, K55, K56, XXX, K57, K58, K59, K5A, XXX, K5B }, \
/* 6 */  { XXX, XXX, XXX, XXX, XXX, K60, K61, XXX, K62, K63, K64, K65, K66, K67, K68, K69, K6A, XXX }, \
/* 7 */  { XXX, K70, XXX, K71, XXX, K72, XXX, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, XXX, XXX } \
}
/*         0    1    2    3    4    5    6    7    8   9    10    11   12   13   14   15   16   17     */

/* Keymap _MAIN: Default Layer
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬────┬────┬───┬────┐
 * │Esc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│Stmp│Paus│Ins│Canc│
 * ├───┴┬──┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──┴────┴──┬┴────┤
 * │ |  │ 1  │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ ì │  <-      │Home │
 * ├────┴─┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬─────────┼─────┤  
 * │ Tab  │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ è │ + │         │PgUP │
 * ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ Invio  ├─────┤
 * │ShftLck│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ò │ à │ ù │        │PgDWN│
 * ├────┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┴────────┼─────┤
 * │Shft│ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │  Dx Shift     │ End │
 * ├────┼───┴┬──┴┬──┴┬──┴───┴───┴───┴───┴─┬─┴───┼───┴┬────┬────┬────┼─────┤
 * │Ctrl│ Fn │Win│Alt│    Space           │AltGr│Menu│Ctrl│ €  │ UP │ $   │    
 * └────┴────┴───┴───┴────────────────────┴─────┴────┴────┼────┼────┼─────┤
 *                                                        │Left│DOWN│Right│    
 *                                                        └────┴────┴─────┘
 */

/* Keyboard model: NSK-H360E 
 * Laptop: ACER ASPIRE 5520
 * Language: ITA
 */
