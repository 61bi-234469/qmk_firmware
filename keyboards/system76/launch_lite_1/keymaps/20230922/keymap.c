#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

enum keyboard_layers {
    _DEFAULT = 0
};

#define OVR_TGL KEY_OVERRIDE_TOGGLE
const key_override_t eql_key_override = ko_make_with_layers_and_negmods(0,KC_EQL,JP_EQL, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t lbrc_key_override = ko_make_with_layers_and_negmods(0,KC_LBRC,JP_LBRC, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t rbrc_key_override = ko_make_with_layers_and_negmods(0,KC_RBRC,JP_RBRC, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t yen_key_override = ko_make_with_layers_and_negmods(0,KC_BSLS,JP_YEN, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t quot_key_override = ko_make_with_layers_and_negmods(0,KC_QUOT,JP_QUOT, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t grv_key_override = ko_make_with_layers_and_negmods(0,KC_GRV,JP_GRV, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t at_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_2,JP_AT);
const key_override_t circ_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_6,JP_CIRC);
const key_override_t ampr_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_7,JP_AMPR);
const key_override_t astr_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_8,JP_ASTR);
const key_override_t lprn_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_9,JP_LPRN);
const key_override_t rprn_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_0,JP_RPRN);
const key_override_t unds_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_MINS,JP_UNDS);
const key_override_t plus_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_EQL,JP_PLUS);
const key_override_t lcbr_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_LBRC,JP_LCBR);
const key_override_t rcbr_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_RBRC,JP_RCBR);
const key_override_t pipe_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_BSLS,JP_PIPE);
const key_override_t coln_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_SCLN,JP_COLN);
const key_override_t dquo_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_QUOT,JP_DQUO);
const key_override_t tild_key_override = ko_make_basic(MOD_MASK_SHIFT,KC_GRV,JP_TILD);



const key_override_t **key_overrides = (const key_override_t *[]){
    &eql_key_override,
    &lbrc_key_override,
    &rbrc_key_override,
    &yen_key_override,
    &quot_key_override,
    &grv_key_override,
    &at_key_override,
    &circ_key_override,
    &ampr_key_override,
    &astr_key_override,
    &lprn_key_override,
    &rprn_key_override,
    &unds_key_override,
    &plus_key_override,
    &lcbr_key_override,
    &rcbr_key_override,
    &pipe_key_override,
    &coln_key_override,
    &dquo_key_override,
    &tild_key_override,
    NULL

};const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, default layer
____________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |             |        |
|  ESC   |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   | BACKSPACE   |  HOME  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |         |        |
|     TAB    |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \  |  PGUP  |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_________|________|
  |            |        |        |        |        |        |        |        |        |        |   ;    |   '    |            |   |        |
  |    CAPS    |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |   ENTER    |   |  PGDN  |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |   ,    |    .   |   /    |            |        |        |
  |     SHIFT      |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |   SHIFT    |   UP   |  END   |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|________|
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |    CTRL    |  LALT  | FN    | LGUI   |    SPACE        |      SPACE      | RCTRL  |  RALT  |     FN      |   |  LEFT  |  DOWN  | RIGHT  |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
*/

  [0] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,  KC_ENT,
          KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,       KC_ENT,
          KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_RSFT,    KC_UP, KC_DEL,
          KC_LCTL, KC_LGUI, KC_LALT,   LT(1,JP_MHEN),     KC_SPC,           KC_ENT,     LT(2,JP_KANA),   KC_RALT,   KC_RCTL,         KC_LEFT, KC_DOWN, KC_RGHT
  ),

    /* Layer 1, function layer
____________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |             | PLAY/  |
|   ~    |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |    DEL      | PAUSE  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|
|            |        |        |        |        |        |        |        |        |        |        |  LED   |  LED   | LED     | VOLUME |
|PRINT SCREEN|        |        |        |        |        |  HOME  |  PGDN  |  PGUP  |  END   |        |  DOWN  |  UP    | TOGGLE  |   UP   |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_________|________|
  |            |        |        |        |        |        |        |        |        |        |        |        |            |   | VOLUME |
  |            |        |        |        |        |        |  LEFT  |  DOWN  |   UP   | RIGHT  |        |        |            |   |  DOWN  |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |        |        |        |            |        |        |
  |                |        |        |        |        |        |        |        |        |        |        |            |  PGUP  |  MUTE  |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|________|
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |            |        |       |        |                 |                 |        |        |             |   |  HOME  |  PGDN  |  END   |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
*/

  [1] = LAYOUT(
    KC_GRV,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_MPLY,
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9,  KC_F10, KC_F11, KC_F12, KC_TRNS, KC_VOLU,
          KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,   KC_9, KC_0, KC_TRNS,    KC_TRNS,     KC_VOLD,
              KC_TRNS, KC_ESC, KC_NO, KC_BSPC, KC_DEL, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_PGUP, KC_MUTE,
          KC_TRNS, MO(3), KC_TRNS,   LT(1,JP_MHEN),     KC_ENT,           KC_ENT,     LT(2,JP_KANA),   KC_TRNS,   KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [2] = LAYOUT(
    KC_GRV,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_MPLY,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_PSCR, KC_NO, KC_NO, KC_NO, KC_VOLU,
          KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO, KC_TRNS,    KC_TRNS,     KC_VOLD,
              KC_TRNS, KC_ESC, KC_NO, KC_BSPC, KC_DEL, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO,   KC_TRNS,  KC_PGUP, KC_MUTE,
          KC_TRNS, MO(3), KC_TRNS,   LT(1,JP_MHEN),     KC_ENT,           KC_ENT,     LT(2,JP_KANA),   KC_TRNS,   KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT(
    QK_BOOT,  KC_NO,   KC_NO,   KO_ON,   KO_OFF,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,      KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, RGB_VAD, RGB_VAI, RGB_TOG, KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_0, KC_NO,    KC_NO,     KC_NO,
              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO, KC_NO,
          KC_NO, KC_NO, KC_NO,   KC_NO,     KC_NO,           KC_NO,     KC_NO,   KC_NO,   KC_NO,         KC_NO, KC_NO, KC_NO
  )


};

