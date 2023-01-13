#include QMK_KEYBOARD_H

#ifdef CONSOLE_ENABLE
#include "print.h"
#endif
// #include "d-militao.h"

#define KC_DESKTOP_RIGHT C(G(KC_RIGHT))
#define KC_DESKTOP_LEFT C(G(KC_LEFT))
#define KC_MISSION_CTRL C(G(KC_UP))
#define KC_TASK_VIEW C(G(KC_DOWN))
#define KC_NOTIFICATION_CENTER C(A(G(KC_RIGHT)))
#define KC_SHOW_DESKTOP C(A(G(KC_DOWN)))
// #define KC_DESKTOP_PIN_APP C(S(G(KC_A)))
// #define KC_DESKTOP_PIN_WINDOW C(S(G(KC_Q)))

#define KC_WORD_RIGHT C(KC_RIGHT)
#define KC_WORD_LEFT C(KC_LEFT)

#define KC_TAB_NEXT C(KC_TAB)
#define KC_TAB_PREV C(S(KC_TAB))

#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)

enum sofle_layers {
    BASE,
    PT,
    GAME,
    GAME_SHIFT,
    NAV,
    MOU,
    SHORT,
    NUM,
    SYM,
    FN
};

// doesn't work try process_unicode
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    #ifdef CONSOLE_ENABLE
        if (record->event.pressed) {
            uprintf("0x%04X,%u,%u,%u\n", keycode, record->event.key.row, record->event.key.col, get_highest_layer(layer_state));
        }
    #endif
    switch (keycode) {
        // case KC_A_ACUT:
        //     if (record->event.pressed) {
        //         // Do something when pressed
        //         if (get_mods() == MOD_MASK_SHIFT) {
        //             // Shift is being held
        //             // register_code(A_UC_ACUT);
        //             register_code(X(A_UC_ACUT));
        //         } else {
        //             // Shift is not being held
        //             // register_code(A_LC_ACUT);
        //             register_code(X(A_LC_ACUT));
        //         }
        //     } else {
        //         // Do something else when release
        //     }
        //     return false;  // Skip all further processing of this key
        default:
            return true;  // Process all other keycodes normally
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[BASE] = LAYOUT( \
  KC_GRV,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                KC_6, KC_7,         KC_8,         KC_9,         KC_0,            KC_EQL, \
  KC_GRV,  KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                KC_Y, KC_U,         KC_I,         KC_O,         KC_P,            KC_BSLS, \
  KC_TILD, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,                KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT), KC_SCLN, \
  KC_EQL,  KC_Z,         KC_X,         KC_C,         KC_V,         KC_B, KC_MPLY,     KC_MUTE, KC_N, KC_M,  KC_COMM,      KC_DOT,       KC_SLSH,         KC_MINS, \
           TG(GAME), MO(PT), LT(SHORT, KC_ESC), LT(MOU, KC_TAB), LT(NAV, KC_SPC),     LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FN, KC_DEL), KC_DESKTOP_LEFT, KC_DESKTOP_RIGHT \
),
[GAME] = LAYOUT( \
  KC_GRV,  KC_1, KC_2, KC_3, KC_4, KC_5,                            KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_EQL, \
  KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,                            KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_BSLS, \
  KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,                            KC_H, KC_J, KC_K,    KC_L,   KC_QUOT, KC_SCLN, \
  KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,     KC_MPLY,      KC_MUTE, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_MINS, \
  TG(GAME), KC_LALT, KC_TAB, KC_SPC, LT(NAV, KC_ESC),      LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FN, KC_DEL), KC_DESKTOP_LEFT, KC_DESKTOP_RIGHT \
),
[GAME_SHIFT] = LAYOUT( \
  KC_GRV,  KC_1, KC_2, KC_3, KC_4, KC_5,                                  KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_EQL, \
  KC_T, KC_TAB,  KC_Q, KC_W, KC_E, KC_R,                                  KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_BSLS, \
  KC_G, KC_LSFT, KC_A, KC_S, KC_D, KC_F,                                  KC_H, KC_J, KC_K,    KC_L,   KC_QUOT, KC_SCLN, \
  KC_B, KC_LCTL, KC_Z, KC_X, KC_C, KC_V,    KC_MPLY,             KC_MUTE, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_MINS, \
  TG(GAME_SHIFT), KC_LALT, LT(NAV, KC_ESC), KC_TAB, KC_SPC,      LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FN, KC_DEL), KC_DESKTOP_LEFT, KC_DESKTOP_RIGHT \
),
[NAV] = LAYOUT( \
  KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,                      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
  KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,                      KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP,  KC_NO, \
  KC_NO, KC_LGUI, KC_LALT, KC_LCTL,  KC_LSFT, KC_NO,                      KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO, \
  KC_NO, U_UND,   U_CUT,   U_CPY,    U_PST,   U_RDO, KC_NO,        KC_NO, U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   KC_NO, \
                         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO \
),
[MOU] = LAYOUT( \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_VOLU, KC_WBAK, KC_MS_U, KC_WFWD, KC_WH_U, KC_NO, \
  KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                      KC_VOLD, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_NO, \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,        KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_BRID, KC_BRIU, KC_NO, \
                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_NO \
),
[SHORT] = LAYOUT( \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_NO, KC_NO,           KC_NO,           KC_NO,                  KC_NO, KC_NO, \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_NO, KC_SHOW_DESKTOP, KC_MISSION_CTRL, KC_NOTIFICATION_CENTER, KC_NO, KC_NO, \
  KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                      KC_NO, KC_DESKTOP_LEFT, KC_TASK_VIEW,    KC_DESKTOP_RIGHT,       KC_NO, KC_NO, \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO,           KC_NO,           KC_NO,                  KC_NO, KC_NO, \
                  KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO \
),
[NUM] = LAYOUT( \
               KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
               KC_NO, KC_PAST, KC_7,  KC_8,  KC_9,  KC_PMNS,                      KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
               KC_NO, KC_0,    KC_4,  KC_5,  KC_6,  KC_PPLS,                      KC_NO,  KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, \
               KC_NO, KC_SLSH, KC_1,  KC_2,  KC_3,  KC_EQL,  KC_NO,        KC_NO, KC_NO,  KC_NO,   KC_COMM, KC_DOT,  KC_NO,   KC_NO, \
  KC_NO, KC_NO, LT(SHORT, KC_COMM), LT(MOU, KC_DOT), LT(NAV, KC_0),        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO \
),
[SYM] = LAYOUT( \
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
  KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_PIPE, KC_RCBR,                      KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
  KC_NO, KC_LPRN, KC_DLR,  KC_PERC, KC_CIRC, KC_RPRN,                      KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, \
  KC_NO, KC_LBRC, KC_EXLM, KC_AT,   KC_HASH, KC_RBRC, KC_NO,        KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
                    KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO \
),
[FN] = LAYOUT( \
  KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
  KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO,                      KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
  KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_PSCR,                    KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, \
  KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO,   KC_NO,        KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
             KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO \
)
};

// const key_override_t comma_key_override = ko_make_with_layers_negmods_and_options(
//     MOD_MASK_SHIFT, // Trigger modifier: shift
//     KC_COMM, // Trigger key: comma
//     KC_SCLN, // Repldacement key: semicolon
//     ~0, // Activate on all layers
//     MOD_MASK_CAG, // Do not activate when ctrl, alt, or gui are pressed
//     ko_option_no_reregister_trigger // Specifies that the comma key is not registered again after lifting ctrl
// );

// const key_override_t dot_key_override = ko_make_with_layers_negmods_and_options(
//     MOD_MASK_SHIFT, // Trigger modifier: shift
//     KC_DOT, // Trigger key: comma
//     S(KC_SCLN), // Replacement key: shifted semicolon
//     ~0, // Activate on all layers
//     MOD_MASK_CAG, // Do not activate when ctrl, alt, or gui are pressed
//     ko_option_no_reregister_trigger // Specifies that the comma key is not registered again after lifting ctrl
// );

// // TODO semicolon not done
// const key_override_t semicolon_key_override = ko_make_with_layers_negmods_and_options(
//     MOD_MASK_SHIFT, // Trigger modifier: shift
//     KC_DOT, // Trigger key: comma
//     S(KC_SCLN), // Replacement key: shifted semicolon
//     ~0, // Activate on all layers
//     MOD_MASK_CAG, // Do not activate when ctrl, alt, or gui are pressed
//     ko_option_no_reregister_trigger // Specifies that the comma key is not registered again after lifting ctrl
// );

// This globally defines all key overrides to be used
// const key_override_t **key_overrides = (const key_override_t *[]) {
//     &comma_key_override,
//     &dot_key_override,
//     NULL // Null terminate the array of overrides!
// };

// uint32_t layer_state_set_user(uint32_t state) {
//     if (autoshift_enabled && (state & (1<<GAME))) {
//         autoshift_disable();
//     } else {
//         autoshift_enable();
//     }
//     return state;
// };


#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code16(KC_BRIU);
        } else {
            tap_code16(KC_BRID);
        }
    }
    return true;
}

#endif

#ifdef OLED_DRIVER_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        case _COLEMAK:
            oled_write_ln_P(PSTR("Clmk"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adj\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif