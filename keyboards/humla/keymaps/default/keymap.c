#include "kb.h"
#include "features/caps_word.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		// Base layer with alpha keys
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, 
		LT(1, KC_TAB), KC_LSFT, LT(3, KC_ENT), KC_BSPC, KC_SPC, KC_DEL),

	KEYMAP(
		// numbers and symbols
		KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,   KC_TRNS, KC_7, KC_8, KC_9, KC_TRNS,
		KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,   KC_MINS, KC_4, KC_5, KC_6, KC_TRNS, 
		KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,   KC_TRNS, KC_1, KC_2, KC_3, KC_LSFT, 
		                  KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_0, KC_TRNS),

	KEYMAP(
		// navigation
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, 
		KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, 
		                  KC_TRNS, KC_LSFT, KC_TRNS,   KC_BSPC, TO(0), KC_DEL),

	KEYMAP(
		// mouse control
		RCS(KC_TAB),  KC_WBAK,  KC_WREF, KC_WFWD, LCTL(KC_TAB),   KC_TRNS, KC_BTN1, KC_MS_U,  KC_BTN2, KC_WH_U, 
		KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_MS_L, KC_MS_D,  KC_MS_R, KC_WH_D, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_WH_L, KC_WH_D,  KC_WH_U, KC_WH_R, 
		                  KC_TRNS, KC_LSFT, KC_TRNS,              KC_BTN1, TO(0), KC_BTN2),
	/*
	KEYMAP(
		// blank layer (template)
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		                  KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS)
	*/

};

const uint16_t PROGMEM cmb_we[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM cmb_sd[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM cmb_zs[] = {KC_Z, KC_S, COMBO_END};
const uint16_t PROGMEM cmb_xd[] = {KC_X, KC_D, COMBO_END};
const uint16_t PROGMEM cmb_qw[] = {KC_Q, KC_W, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	COMBO(cmb_we, TO(2)),
	COMBO(cmb_sd, TO(3)),
	COMBO(cmb_zs, OSM(MOD_LCTL)),
	COMBO(cmb_xd, OSM(MOD_LALT)),
    COMBO(cmb_qw, KC_ESC),
	//COMBO(cmb_cv, MO(6)),
	//COMBO(cmb_aa, KC_NO),
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_caps_word(keycode, record)) { return false; }
  // Your macros ...

	return true;
}