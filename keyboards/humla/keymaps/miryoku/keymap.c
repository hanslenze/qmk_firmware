#include "miryoku.c"
#include "features/caps_word.h"

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_caps_word(keycode, record)) { return false; }
  // Your macros ...

	return true;
}
/*
const uint16_t PROGMEM combo1[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo2[] = {KC_O, KC_P, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo1, KC_ESC),
    COMBO(combo2, KC_BSPC), // keycodes with modifiers are possible too!
};
*/