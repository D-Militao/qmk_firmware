#include QMK_KEYBOARD_H

#ifdef CONSOLE_ENABLE
#include "print.h"
#endif

#include "d-militao.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)


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
    [BASE] = LAYOUT_wrapper(
                           _____QWERTY_L5_____,                      _____QWERTY_R5_____,
                           _____QWERTY_L4_____,                      _____QWERTY_R4_____,
                           _____QWERTY_L3_____,                      _____QWERTY_R3_____,
                           _____QWERTY_L2_____, KC_MPLY,    KC_MUTE, _____QWERTY_R2_____,
        TG(GAME), KC_LALT, _____QWERTY_L1_____,                      _____QWERTY_R1_____, KC_DESKTOP_LEFT, KC_DESKTOP_RIGHT
    ),
    [GAME] = LAYOUT_wrapper(
                          _____GAME_L5_____,                      _____GAME_R5_____,
                          _____GAME_L4_____,                      _____GAME_R4_____,
                          _____GAME_L3_____,                      _____GAME_R3_____,
                          _____GAME_L2_____, KC_MPLY,    KC_MUTE, _____GAME_R2_____,
        KC_TRNS, KC_TRNS, _____GAME_L1_____,                      _____GAME_R1_____, KC_TRNS, KC_TRNS
    ),
    [NAV] = LAYOUT_wrapper(
                          _____NAV_L5_____,                      _____NAV_R5_____,
                          _____NAV_L4_____,                      _____NAV_R4_____,
                          _____NAV_L3_____,                      _____NAV_R3_____,
                          _____NAV_L2_____, KC_TRNS,    KC_TRNS, _____NAV_R2_____,
        KC_TRNS, KC_TRNS, _____NAV_L1_____,                      _____NAV_R1_____, KC_TRNS, KC_TRNS
    ),
    [MOU] = LAYOUT_wrapper(
                          _____MOU_L5_____,                      _____MOU_R5_____,
                          _____MOU_L4_____,                      _____MOU_R4_____,
                          _____MOU_L3_____,                      _____MOU_R3_____,
                          _____MOU_L2_____, KC_TRNS,    KC_TRNS, _____MOU_R2_____,
        KC_TRNS, KC_TRNS, _____MOU_L1_____,                      _____MOU_R1_____, KC_TRNS, KC_TRNS
    ),
    [SHORT] = LAYOUT_wrapper(
                          _____SHORT_L5_____,                      _____SHORT_R5_____,
                          _____SHORT_L4_____,                      _____SHORT_R4_____,
                          _____SHORT_L3_____,                      _____SHORT_R3_____,
                          _____SHORT_L2_____, KC_TRNS,    KC_TRNS, _____SHORT_R2_____,
        KC_TRNS, KC_TRNS, _____SHORT_L1_____,                      _____SHORT_R1_____, KC_TRNS, KC_TRNS
    ),
    [NUM] = LAYOUT_wrapper(
                          _____NUM_L5_____,                      _____NUM_R5_____,
                          _____NUM_L4_____,                      _____NUM_R4_____,
                          _____NUM_L3_____,                      _____NUM_R3_____,
                          _____NUM_L2_____, KC_TRNS,    KC_TRNS, _____NUM_R2_____,
        KC_TRNS, KC_TRNS, _____NUM_L1_____,                      _____NUM_R1_____, KC_TRNS, KC_TRNS
    ),
    [SYM] = LAYOUT_wrapper( \
                          _____SYM_L5_____,                      _____SYM_R5_____,
                          _____SYM_L4_____,                      _____SYM_R4_____,
                          _____SYM_L3_____,                      _____SYM_R3_____,
                          _____SYM_L2_____, KC_TRNS,    KC_TRNS, _____SYM_R2_____,
        KC_TRNS, KC_TRNS, _____SYM_L1_____,                      _____SYM_R1_____, KC_TRNS, KC_TRNS
    ),
    [FN] = LAYOUT_wrapper( \
                          _____FN_L5_____,                      _____FN_R5_____,
                          _____FN_L4_____,                      _____FN_R4_____,
                          _____FN_L3_____,                      _____FN_R3_____,
                          _____FN_L2_____, KC_TRNS,    KC_TRNS, _____FN_R2_____,
        KC_TRNS, KC_TRNS, _____FN_L1_____,                      _____FN_R1_____, KC_TRNS, KC_TRNS
    )
};


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