/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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
//reduce firmware size
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT


#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_RIGHT
#define SPLIT_WPM_ENABLE
//#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_OLED_ENABLE

// #define MASTER_RIGHT
// #define EE_HANDS


#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD //Conflict with one shot key
#define TAPPING_TERM 200
#define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#ifdef RGBLIGHT_ENABLE
//    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//    #define RGBLIGHT_EFFECT_SNAKE
//    #define RGBLIGHT_EFFECT_KNIGHT
//    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//    #define RGBLIGHT_EFFECT_RGB_TEST
//    #define RGBLIGHT_EFFECT_ALTERNATING
//    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 6
    #define RGBLIGHT_SAT_STEP 10
    #define RGBLIGHT_VAL_STEP 10
    #define RGBLIGHT_SLEEP  // allows us to use rgblight_suspend() and rgblight_wakeup() in keymap.c
    #define RGBLIGHT_SPLIT
    #define RGBLIGHT_TIMEOUT 60000  // 60 seconds

    #undef RGBLED_NUM
    #define RGBLED_NUM 54
    #undef RGBLED_SPLIT
    #define RGBLED_SPLIT {27, 27}

    #define LED_LAYOUT( \
                 L00, L01, L02,                R00, R01, R02, \
                 L03, L04, L05,                R03, R04, R05, \
    \
       L06, L07, L08, L09, L10, L11,      R06, R07, R08, R09, R10, R11, \
       L12, L13, L14, L15, L16, L17,      R12, R13, R14, R15, R16, R17, \
       L18, L19, L20, L21, L22, L23,      R18, R19, R20, R21, R22, R23, \
                      L24, L25, L26,      R24, R25, R26  \
    ) { \
       L02, L01, L00, \
       L03, L04, L05, \
       L26, L23, L17, L11, \
       L10, L16, L22, L25, \
       L24, L21, L15, L09, \
       L08, L14, L20, \
       L19, L13, L07, \
       L06, L12, L18, \
    \
       R02, R01, R00, \
       R03, R04, R05, \
       R24, R18, R12, R06, \
       R07, R13, R19, R25, \
       R26, R20, R14, R08, \
       R09, R15, R21, \
       R22, R16, R10, \
       R11, R17, R23 \
    }

    /*
    #define RGBLIGHT_LED_MAP LED_LAYOUT( \
              0,  1,  2,                     27, 28, 29, \
              3,  4,  5,                     30, 31, 32, \
    \
      6,  7,  8,  9, 10, 11,             33, 34, 35, 36, 37, 38, \
     12, 13, 14, 15, 16, 17,             39, 40, 41, 42, 43, 44, \
     18, 19, 20, 21, 22, 23,             45, 46, 47, 48, 49, 50, \
                     24, 25, 26,     51, 52, 53 \
    )
    */
    #define RGBLIGHT_LED_MAP LED_LAYOUT( \
              4, 12, 21,                     47, 39, 29, \
              6, 14, 23,                     49, 41, 31, \
    \
      0,  3,  8, 11, 16, 20,             28, 34, 38, 43, 46, 51, \
      1,  5,  9, 13, 17, 22,             30, 35, 40, 44, 48, 52, \
      2,  7, 10, 15, 18, 24,             32, 36, 42, 45, 50, 53, \
                     19, 25, 26,     27, 33, 37 \
    )
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#define OLED_TIMEOUT 30000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 1
