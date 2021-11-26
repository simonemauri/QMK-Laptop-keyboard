/*
Copyright 2021 Sim-1

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xB92B
#define DEVICE_VER      0x0001
#define MANUFACTURER    Sim-1
#define PRODUCT         SimSTM2Keyb

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 18

/* key matrix pins */
#define MATRIX_ROW_PINS { B11, B10, B1, B0, A7, A6, A5, A4 }
#define MATRIX_COL_PINS { A3, A2, A1, A0, B12, B13, B14, B15, A8, A9, A10, A15, B3, B4, B5, B9, C15, C14 }
#define UNUSED_PINS


#define LED_NUM_LOCK_PIN B6
#define LED_CAPS_LOCK_PIN B7
#define LED_SCROLL_LOCK_PIN B8


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL 

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

