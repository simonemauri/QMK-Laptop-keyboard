/* Keyboard model: NSK-H360E 
   Laptop: ACER ASPIRE (5520)
   Language: ITA
 */


#include QMK_KEYBOARD_H
#include "keymap_italian.h"

#define _MAIN 0
#define _NUM 1
#define _FN 1

/* Keymap _MAIN: Default Layer
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬────┬────┬───┬────┐
 * │Esc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│Stmp│Paus│Ins│Canc│
 * ├───┴┬──┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──┴────┴──┬┴────┤
 * │ \  │ 1  │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ ì │  <-      │Home │
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT(

  KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCREEN, KC_PAUSE, KC_INS, KC_DEL, \
  IT_BSLS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, IT_QUOT, IT_IGRV, KC_BSPACE , KC_HOME, \
  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, IT_EGRV, IT_PLUS, KC_ENTER, KC_PGUP, \
  KC_CAPSLOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, IT_OGRV, IT_AGRV, IT_UGRV,      KC_PGDOWN, \
  KC_LSHIFT, IT_LABK, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, IT_COMM, IT_DOT, IT_MINS,    KC_RSHIFT,   KC_END, \
  KC_LCTRL, MO(_FN), KC_LGUI, KC_LALT,           KC_SPACE,           KC_RALT, KC_RGUI, KC_RCTRL, IT_EURO, KC_UP, IT_DLR, \
                                                              KC_LEFT, KC_DOWN, KC_RIGHT  \
  ),

/* Keymap _NUMERIC: Numeric keypad Layer
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬────┬────┬───┬────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │    │    │   │    │
 * ├───┴┬──┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──┴────┴──┬┴────┤
 * │    │    │   │   │   │   │   │   │   │   │   │   │   │          │     │
 * ├────┴─┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬─────────┼─────┤  
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │         │     │
 * ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐        ├─────┤
 * │       │   │   │   │   │   │   │   │   │   │   │   │   │        │     │
 * ├────┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┴────────┼─────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │               │     │
 * ├────┼───┴┬──┴┬──┴┬──┴───┴───┴───┴───┴─┬─┴───┼───┴┬────┬────┬────┼─────┤
 * │    │    │   │   │                    │     │    │    │    │    │     │    
 * └────┴────┴───┴───┴────────────────────┴─────┴────┴────┼────┼────┼─────┤
 *                                                        │    │    │     │    
 *                                                        └────┴────┴─────┘
 */

  [_NUM] = LAYOUT(

  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, KC_7, KC_8, KC_9, KC_0, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, KC_4, KC_5, KC_6, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, KC_1, KC_2, KC_3, IT_MINS, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_0, _______, _______, IT_PLUS, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                                                       _______, _______, _______ \
  ),

  [_FN] = LAYOUT(

  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NUMLOCK, KC_SCROLLLOCK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MEDIA_PLAY_PAUSE, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MEDIA_STOP, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MEDIA_PREV_TRACK, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MEDIA_NEXT_TRACK, \
  XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                                                       KC_BRIGHTNESS_DOWN, XXXXXXX, KC_BRIGHTNESS_UP \
  ),

};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *  You can use _______ in place for KC_TRNS (transparent)   *
 *  Or you can use XXXXXXX for KC_NO (NOOP)                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

