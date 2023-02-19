#include "d-militao.h"

const custom_shift_key_t custom_shift_keys[] = {
  {KC_DOT , KC_COLN}, // Shift . is :
  {KC_COMM, KC_SCLN}, // Shift , is ;
  {KC_LABK, KC_RABK}  // Shift < is >
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_custom_shift_keys(keycode, record)) { return false; }
  // Your macros ...
  return true;
}
