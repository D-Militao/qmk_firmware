#include QMK_KEYBOARD_H

#include "d-militao.h"


#define LAYOUT_wrapper(...) LAYOUT_split_3x6_3(__VA_ARGS__)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [BASE] = LAYOUT_wrapper(
        _____QWERTY_L4_____, _____QWERTY_R4_____,
        _____QWERTY_L3_____, _____QWERTY_R3_____,
        _____QWERTY_L2_____, _____QWERTY_R2_____,
        _____QWERTY_L1_____, _____QWERTY_R1_____
    ),
    [NAV] = LAYOUT_wrapper(
        _____NAV_L4_____, _____NAV_R4_____,
        _____NAV_L3_____, _____NAV_R3_____,
        _____NAV_L2_____, _____NAV_R2_____,
        _____NAV_L1_____, _____NAV_R1_____
    ),
    [MOU] = LAYOUT_wrapper(
        _____MOU_L4_____, _____MOU_R4_____,
        _____MOU_L3_____, _____MOU_R3_____,
        _____MOU_L2_____, _____MOU_R2_____,
        _____MOU_L1_____, _____MOU_R1_____
    ),
    [SHORT] = LAYOUT_wrapper(
        _____SHORT_L4_____, _____SHORT_R4_____,
        _____SHORT_L3_____, _____SHORT_R3_____,
        _____SHORT_L2_____, _____SHORT_R2_____,
        _____SHORT_L1_____, _____SHORT_R1_____
    ),
    [NUM] = LAYOUT_wrapper(
        _____NUM_L4_____, _____NUM_R4_____,
        _____NUM_L3_____, _____NUM_R3_____,
        _____NUM_L2_____, _____NUM_R2_____,
        _____NUM_L1_____, _____NUM_R1_____
    ),
    [SYM] = LAYOUT_wrapper(
        _____SYM_L4_____, _____SYM_R4_____,
        _____SYM_L3_____, _____SYM_R3_____,
        _____SYM_L2_____, _____SYM_R2_____,
        _____SYM_L1_____, _____SYM_R1_____
    ),
    [FN] = LAYOUT_wrapper(
        _____FN_L4_____, _____FN_R4_____,
        _____FN_L3_____, _____FN_R3_____,
        _____FN_L2_____, _____FN_R2_____,
        _____FN_L1_____, _____FN_R1_____
    )
};

