#include QMK_KEYBOARD_H

#define L1_SPC  LT(1,KC_SPC)
#define L2_ZKHK LT(2,KC_GRV)
#define L2_APP  LT(2,KC_APP)
#define MU_LSFT LSFT_T(KC_MHEN)
#define ET_LCTL LCTL_T(KC_ENT)
#define ET_RCTL RCTL_T(KC_ENT)
#define HE_RSFT RSFT_T(KC_HENK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* (JP)
     * ┌───┬───┬───┬───┬───┬───┐    ┌───┬───┬───┬───┬───┬───┐
     * │Esc│ Q │ W │ E │ R │ T │    │ Y │ U │ I │ O │ P │ @ │
     * ├───┼───┼───┼───┼───┼───┤    ├───┼───┼───┼───┼───┼───┤
     * │ - │ A │ S │ D │ F │ G │    │ H │ J │ K │ L │ ; │ : │
     * ├───┼───┼───┼───┼───┼───┤    ├───┼───┼───┼───┼───┼───┤
     * │Tab│ Z │ X │ C │ V │ B │    │ N │ M │ , │ . │ / │ \ │
     * ├───┼───┼───┼───┼───┼───┤    ├───┼───┼───┼───┼───┼───┤
     * │E/J│GUI│Alt│Sft│Ctl│Spc│    │Spc│Ctl│Sft│Alt│GUI│App│
     * └───┴───┴───┴───┴───┴───┘    └───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_MINS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_INT1,
        L2_ZKHK, KC_LGUI, KC_LALT, MU_LSFT, ET_LCTL, L1_SPC,           L1_SPC,  ET_RCTL, HE_RSFT, KC_RALT, KC_RGUI, L2_APP
    ),

    [1] = LAYOUT(
        KC_TRNS, KC_COLN, KC_MINS, KC_DQUO, KC_SLSH, KC_UNDS,          KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  KC_PSCREEN,
        KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_EQL,  KC_INT3,
        KC_CAPS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS,          KC_TRNS, KC_DEL,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_RCBR, KC_PIPE, KC_AMPR, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            KC_F11,  KC_RBRC, KC_BSLS, KC_AT,   KC_TRNS, KC_TRNS,
        KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,           KC_F12,  KC_ASTR, KC_LPRN, KC_LCBR, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
