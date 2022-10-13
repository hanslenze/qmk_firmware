#include "kb.h"
#include "features/caps_word.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		// Base layer with alpha keys
		KC_Q, KC_W, KC_E, KC_R, KC_T,           KC_Y, KC_U, KC_I, KC_O, KC_P, 
		KC_A, KC_S, KC_D, KC_F, KC_G,           KC_H, KC_J, KC_K, KC_L, KC_SCLN, 
		KC_Z, KC_X, KC_C, KC_V, KC_B,           KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, 
	    LT(1, KC_ESC), KC_BSPC, LT(3, KC_TAB),  KC_ENT, KC_SPC, KC_DEL),

	KEYMAP(
		// numbers and symbols
		KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,   KC_NO, KC_7, KC_8, KC_9, KC_NO,
		OSM(LSHIFT), KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,   KC_MINS, KC_4, KC_5, KC_6, KC_NO, 
		KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,   KC_NO, KC_1, KC_2, KC_3, KC_LSFT, 
		                  KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_0, KC_NO),

	KEYMAP(
		// navigation
		KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, 
		KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, 
		KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, 
		                KC_NO, KC_LSFT, KC_NO,   KC_BSPC, TO(0), KC_DEL),

	KEYMAP(
		// mouse control
		RCS(KC_TAB),  KC_WBAK,  KC_WREF, KC_WFWD, LCTL(KC_TAB),   KC_NO, KC_BTN1, KC_MS_U,  KC_BTN2, KC_WH_U, 
		KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_MS_L, KC_MS_D,  KC_MS_R, KC_WH_D, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO, KC_WH_L, KC_WH_D,  KC_WH_U, KC_WH_R, 
		                  KC_NO, KC_LSFT, KC_NO,                  KC_BTN1, TO(0), KC_BTN2),
	/*
	KEYMAP(
		// blank layer (template)
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		                  KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO, KC_NO)
	*/

};

const uint16_t PROGMEM cmb_we[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM cmb_sd[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM cmb_zs[] = {KC_Z, KC_S, COMBO_END};
const uint16_t PROGMEM cmb_xd[] = {KC_X, KC_D, COMBO_END};
const uint16_t PROGMEM cmb_qw[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM cmb_az[] = {KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM cmb_collslash[] = {KC_SCLN, KC_SLSH, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	COMBO(cmb_we, TO(2)),
	COMBO(cmb_sd, TO(3)),
	COMBO(cmb_zs, OSM(MOD_LCTL)),
	COMBO(cmb_xd, OSM(MOD_LALT)),
    COMBO(cmb_qw, KC_ESC),
	COMBO(cmb_az, KC_LSFT),
	COMBO(cmb_collslash, KC_RSFT),
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