# Old portuguese layer that used keymap_portuguese.h


[PT] = LAYOUT( \
  PT_GRV,  PT_1,         PT_2,         PT_3,         PT_4,         PT_5,                       PT_6, PT_7,         PT_8,         PT_9,         PT_0,            PT_MORD, \
  KC_TAB,  PT_Q,         PT_W,         PT_E,         PT_R,         PT_T,                       PT_Y, PT_U,         PT_I,         PT_O,         PT_P,            PT_ACUT, \
  KC_LSFT, LGUI_T(PT_A), LALT_T(PT_S), LCTL_T(PT_D), LSFT_T(PT_F), PT_G,                       PT_H, RSFT_T(PT_J), RCTL_T(PT_K), RALT_T(PT_L), RGUI_T(PT_CCED), PT_TILD, \
  KC_LCTL, PT_Z,         PT_X,         PT_C,         PT_V,         PT_B, KC_MPLY,     KC_MUTE, PT_N, PT_M,         PT_COMM,      PT_DOT,       PT_QUOT,         PT_MINS, \
           TG(GAME), TG(PT), LT(MOU, KC_ESC), LT(SHORT, KC_TAB), LT(NAV, KC_SPC),     LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FN, KC_DEL), KC_DESKTOP_LEFT, KC_DESKTOP_RIGHT \
),


# Empty layers with right and left mods

[RIGHT_ACT] = LAYOUT( \
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, \
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO \
),
[LEFT_ACT] = LAYOUT( \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
  KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO \
)