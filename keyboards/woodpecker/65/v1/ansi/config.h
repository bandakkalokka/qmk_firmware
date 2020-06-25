/*
Copyright 2012 Kottoruwa <chathula.adikary@gmail.com> , <kmarasinghe1@gmail.com>

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

/* USB Device Descriptor Parameters */
#define VENDOR_ID	0x9397
#define PRODUCT_ID	0x0001
#define DEVICE_VER	0
#define MANUFACTURER	Kottoruwa
#define PRODUCT		65
#define DESCRIPTION	A 65% Keyboard with RGB Backlighting, BLE Connectivity, and an OLED Display

/* Key Matrix size */
#define MATRIX_ROWS	5
#define MATRIX_COLS	15	

/* ROWS: Top to Bottom, COLS: Left to Right */
#define MATRIX_ROW_PINS {B8, B9, C13, C14, C15}
#define MATRIX_COL_PINS	{B6, B5, B4, B3, A15, A8, B15, B14, B13, B12, B11, B10, B2, B1, B0}

#define UNUSED_PINS	{A2}
#define DIODE_DIRECTION	COL2ROW

/* Debounce Time in miliseconds */
#define DEBOUNCE 	5

//#define BACKLIGHT_PIN		B6
//#define BACKLIGHT_LEVELS	3

/* Underglow Configuration */
#define RGB_DI_PIN	B7
#define RGBLIGHT_ANIMATIONS	
#define RGBLED_NUM 1
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
//#define RGBLIGHT_LAYERS	
