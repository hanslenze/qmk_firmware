// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include "config.c"
#include "config.h"
#include "miryoku.h"

/*
#define LAYOUT_miryoku( \
       K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09, \
       K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19, \
       K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29, \
       N30,   N31,   K32,   K33,   K34,   K35,   K36,   K37,   N38,   N39 \
) \
LAYOUT( \
K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09, \
K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19, \
K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29, \
              K32,   K33,   K34,   K35,   K36,   K37 \
)
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  original
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),
    LT(BUTTON, KC_Z),  ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(BUTTON, KC_SLSH),
    U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_BSPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_SPC),  LT(FUN, KC_DEL),   U_NP,              U_NP
  */
  [BASE] = LAYOUT_miryoku(
    KC_Q,          KC_W,         KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,            KC_I,              KC_O,              KC_P,
    LSFT_T(KC_A),  LGUI_T(KC_S), KC_D,              KC_F,              KC_G,              KC_H,              KC_J,            KC_K,              LGUI_T(KC_L),      LSFT_T(KC_QUOT),
    LCTL_T(KC_Z),  LALT_T(KC_X), KC_C,              KC_V,              KC_B,              KC_N,              KC_M,            KC_COMM,           ALGR_T(KC_DOT),    LCTL_T(KC_SLSH),
    X_NP,          X_NP,         LT(MEDR, KC_ESC),  LT(NAVR, KC_BSPC), LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_SPC), LT(FUNL, KC_DEL),  X_NP,              X_NP
  ),
  /*
  original
  [NAV] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  */
  [NAVR] = LAYOUT_miryoku(
    RCS(KC_TAB),  KC_WBAK,   KC_WREF, KC_WFWD,  LCTL(KC_TAB),    KC_AGIN, KC_UNDO, KC_UP,   X_NA,    KC_PGUP,
    KC_LSFT,      KC_LGUI,   X_NA,   X_NA,  X_NA,            KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,
    KC_LCTL,      KC_LALT,   X_NA,    X_NA,     DF(NAVR),            KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    X_NP,         X_NP,      X_NA,    DF(BASE), X_NA,            KC_ENT,  KC_BSPC, KC_DEL,  X_NP,    X_NP
  ),
  /*
  original
  [MOUSE] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  */
  [MOUR] = LAYOUT_miryoku(
    RCS(KC_TAB),  KC_WBAK,  KC_WREF, KC_WFWD, LCTL(KC_TAB),  X_NU,    KC_BTN1, KC_MS_U,  KC_BTN2, KC_WH_U,
    KC_LSFT,      KC_LGUI,  X_NA,   X_NA,    X_NA,          X_NU,    KC_MS_L, KC_MS_D,  KC_MS_R, KC_WH_D,
    KC_LCTL,     KC_LALT,  X_NA,    X_NA,    DF(MOUR),          X_NU,    KC_WH_L, KC_WH_D,  KC_WH_U, KC_WH_R,
    X_NP,         X_NP,     X_NA,    X_NA,    DF(BASE),      KC_BTN1, KC_BTN3, KC_BTN2,  X_NP,    X_NP
  ),
  /*
  original
  [MEDIA] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
  */
  [MEDR] = LAYOUT_miryoku(
    RESET,    X_NA,    X_NA,     X_NA,    X_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    OSM(MOD_LSFT),  OSM(MOD_LGUI), X_NA,  X_NA, X_NA,    X_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    OSM(MOD_LCTL), OSM(MOD_LALT), X_NA,     X_NA,    DF(MEDR),    X_NU,    X_NU,    X_NU,    X_NU,    X_NU,
    X_NP,     X_NP,    DF(BASE), X_NA,    X_NA,    KC_MSTP, KC_MPLY, KC_MUTE, X_NP,    X_NP
  ),
  /*
  orignal
  [NUM] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DOT,  KC_0,    KC_MINS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  */
  [NSL] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, X_NA,    X_NA,     X_NA,    X_NA,    RESET,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  X_NA,    X_NA,  X_NA, KC_LGUI, KC_LSFT,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, DF(NSL),    U_PST,    U_CPY,   KC_LALT,   KC_LCTL,
    X_NP,    X_NP,    KC_DOT,  KC_0,    KC_MINS, X_NA,    DF(BASE), X_NA,    X_NP,    X_NP
  ),
  /*
  original
  [SYM] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_LPRN, KC_RPRN, KC_UNDS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  */
  [NSSL] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,     MO(BUTTON), X_NA,  X_NA,    X_NA,    RESET,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,     X_NA,       X_NA,  X_NA,    KC_LGUI, KC_LSFT,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,     DF(NSSL),   X_NA,  X_NA,    KC_LALT, KC_LCTL,
    X_NP,    X_NP,    KC_LPRN, KC_RPRN, KC_UNDS,     DF(BASE),   X_NA,  X_NA,    X_NP,    X_NP
  ),
  /*
  original
  [FUN] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_APP,  KC_SPC,  KC_TAB,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  */
  [FUNL] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, X_NA,    X_NA,    X_NA,     X_NA,    RESET,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, X_NA,    X_NA, X_NA,  KC_LGUI, KC_LSFT,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, DF(FUNL),    U_PST,   U_CPY,    KC_LALT,   KC_LCTL,
    X_NP,    X_NP,    KC_APP,  KC_SPC,  KC_TAB,  X_NA,    X_NA,    DF(BASE), X_NP,    X_NP
  ),

  [BUTTON] = LAYOUT_miryoku(
    U_UND,   U_CUT,   U_CPY,   U_PST,   DT_UP,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, DT_PRNT, KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,
    U_UND,   U_CUT,   U_CPY,   U_PST,   DT_DOWN,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  )
};

enum combos { 
  A_Z_LSFT,
  QUOT_SLSH_RSFT,
  Q_W_ESC,
  
};

const uint16_t PROGMEM a_z_lsft[] = { KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM quot_slsh_rsft[] = { KC_QUOT, KC_SLSH, COMBO_END};
const uint16_t PROGMEM q_w_esc[] = { KC_Q, KC_W, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [A_Z_LSFT] = COMBO(a_z_lsft, KC_LSFT),
  [QUOT_SLSH_RSFT] = COMBO(quot_slsh_rsft, KC_RSFT),
  [Q_W_ESC] = COMBO(q_w_esc, KC_ESC),
  
};