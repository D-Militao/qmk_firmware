#pragma once

#include QMK_KEYBOARD_H
#include "keycodes.h"

#define _____QWERTY_L5_____ KC_ESC,   KC_1,         KC_2,         KC_3,         KC_4,         KC_5
#define _____QWERTY_L4_____ KC_GRV,  KC_Q,         KC_W,         KC_E,         KC_R,         KC_T
#define _____QWERTY_L3_____ KC_TILD,  LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G
#define _____QWERTY_L2_____ KC_EQUAL, KC_Z,         KC_X,         KC_C,         KC_V,         KC_B
#define _____QWERTY_L1_____ LT(SHORT, KC_ESC), LT(NAV, KC_SPC), LT(MOU, KC_TAB)

#define _____QWERTY_R5_____ KC_6, KC_7,         KC_8,         KC_9,         KC_0,            KC_ESC
#define _____QWERTY_R4_____ KC_Y, KC_U,         KC_I,         KC_O,         KC_P,            KC_BSLS
#define _____QWERTY_R3_____ KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT), KC_LABK
#define _____QWERTY_R2_____ KC_N, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,         KC_MINUS
#define _____QWERTY_R1_____ LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FN, KC_DEL)


#define _____GAME_L5_____ KC_GRV,  KC_1, KC_2, KC_3, KC_4, KC_5
#define _____GAME_L4_____ KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T
#define _____GAME_L3_____ KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G
#define _____GAME_L2_____ KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B
#define _____GAME_L1_____ KC_TAB, KC_SPC, LT(NAV, KC_ESC)

#define _____GAME_R5_____ KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL
#define _____GAME_R4_____ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC
#define _____GAME_R3_____ KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_SCLN
#define _____GAME_R2_____ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT
#define _____GAME_R1_____ KC_TRNS, KC_TRNS, KC_TRNS


// ################################################
// # Layers made to be activated on the left side #
// ################################################

// Navigation layer
#define _____NAV_L5_____ KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO
#define _____NAV_L4_____ KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO
#define _____NAV_L3_____ KC_NO, KC_LGUI, KC_LALT, KC_LCTL,  KC_LSFT, KC_NO
#define _____NAV_L2_____ KC_NO, U_UND,   U_CUT,   U_CPY,    U_PST,   U_RDO
#define _____NAV_L1_____ KC_TRNS, KC_TRNS, KC_TRNS

#define _____NAV_R5_____ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define _____NAV_R4_____ KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_NO
#define _____NAV_R3_____ KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO
#define _____NAV_R2_____ U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   KC_NO
#define _____NAV_R1_____ KC_TRNS, KC_TRNS, KC_TRNS

// Mouse layer
#define _____MOU_L5_____ KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO
#define _____MOU_L4_____ KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO
#define _____MOU_L3_____ KC_NO, KC_LGUI, KC_LALT, KC_LCTL,  KC_LSFT, KC_NO
#define _____MOU_L2_____ KC_NO, U_UND,   U_CUT,   U_CPY,    U_PST,   U_RDO
#define _____MOU_L1_____ KC_TRNS, KC_TRNS, KC_TRNS

#define _____MOU_R5_____ KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define _____MOU_R4_____ KC_VOLU, KC_WBAK, KC_MS_U, KC_WFWD, KC_WH_U, KC_NO
#define _____MOU_R3_____ KC_VOLD, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_NO
#define _____MOU_R2_____ KC_MPRV, KC_MPLY, KC_MNXT, KC_BRID, KC_BRIU, KC_NO
#define _____MOU_R1_____ KC_BTN1, KC_BTN2, KC_BTN3

// Shortcuts layer
#define _____SHORT_L5_____ KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO
#define _____SHORT_L4_____ KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO
#define _____SHORT_L3_____ KC_NO, KC_LGUI, KC_LALT, KC_LCTL,  KC_LSFT, KC_NO
#define _____SHORT_L2_____ KC_NO, U_UND,   U_CUT,   U_CPY,    U_PST,   U_RDO
#define _____SHORT_L1_____ KC_TRNS, KC_TRNS, KC_TRNS

#define _____SHORT_R5_____ KC_NO, KC_NO,           KC_NO,           KC_NO,                  KC_NO, KC_NO
#define _____SHORT_R4_____ KC_NO, KC_SHOW_DESKTOP, KC_MISSION_CTRL, KC_NOTIFICATION_CENTER, KC_NO, KC_NO
#define _____SHORT_R3_____ KC_NO, KC_DESKTOP_LEFT, KC_TASK_VIEW,    KC_DESKTOP_RIGHT,       KC_NO, KC_NO
#define _____SHORT_R2_____ U_RDO, U_PST,           U_CPY,           U_CUT,                  U_UND, KC_NO
#define _____SHORT_R1_____ KC_TRNS, KC_TRNS, KC_TRNS


// #################################################
// # Layers made to be activated on the right side #
// #################################################

// Number and symbols (by using shift)
#define _____NUM_L5_____ KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO
#define _____NUM_L4_____ KC_NO, KC_PAST, KC_7,  KC_8,  KC_9,  KC_PMNS
#define _____NUM_L3_____ KC_NO, KC_0,    KC_4,  KC_5,  KC_6,  KC_PPLS
#define _____NUM_L2_____ KC_NO, KC_SLSH, KC_1,  KC_2,  KC_3,  KC_EQL
#define _____NUM_L1_____ LT(SHORT, KC_LPRN), LT(NAV, KC_0), LT(MOU, KC_RPRN)

#define _____NUM_R5_____ KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define _____NUM_R4_____ KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define _____NUM_R3_____ KC_NO,  KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO
#define _____NUM_R2_____ KC_NO,  KC_NO,   KC_COMM, KC_DOT,  KC_NO,   KC_NO
#define _____NUM_R1_____ KC_TRNS, KC_TRNS, KC_TRNS

// Symbol layer (will not include NUM layer symbols that can be accessed with shift)
#define _____SYM_L5_____ KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define _____SYM_L4_____ KC_NO, KC_GRV,  KC_TILD, KC_LCBR, KC_RCBR, KC_NO
#define _____SYM_L3_____ KC_NO, KC_LABK, KC_RABK, KC_LPRN, KC_RPRN, KC_NO
#define _____SYM_L2_____ KC_NO, KC_BSLS, KC_PIPE, KC_LBRC, KC_RBRC, KC_NO
#define _____SYM_L1_____ KC_TRNS, KC_TRNS, KC_TRNS

#define _____SYM_R5_____ KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define _____SYM_R4_____ KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define _____SYM_R3_____ KC_NO,  KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO
#define _____SYM_R2_____ KC_NO,  KC_NO,   KC_COMM, KC_DOT,  KC_NO,   KC_NO
#define _____SYM_R1_____ KC_TRNS, KC_TRNS, KC_TRNS

// Function keys layer
#define _____FN_L5_____ KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO
#define _____FN_L4_____ KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO
#define _____FN_L3_____ KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_PSCR
#define _____FN_L2_____ KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO
#define _____FN_L1_____ KC_TRNS, KC_TRNS, KC_TRNS

#define _____FN_R5_____ KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define _____FN_R4_____ KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define _____FN_R3_____ KC_NO,  KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO
#define _____FN_R2_____ KC_NO,  KC_NO,   KC_COMM, KC_DOT,  KC_NO,   KC_NO
#define _____FN_R1_____ KC_TRNS, KC_TRNS, KC_TRNS