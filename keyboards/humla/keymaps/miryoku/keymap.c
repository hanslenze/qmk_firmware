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
