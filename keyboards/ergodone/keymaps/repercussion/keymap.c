#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "version.h"

#define BASE 0 // default layer
#define GAME 1 // gaming keys
#define WIND 2 // windows keys
#define LWR 3 // lower
#define RSE 4
#define ADJ 5 // adjust

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        KC_EQL,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_ESC,
        KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC_MPLY,
        MO(3),          KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSFT,        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC__VOLDOWN,
        KC_GRV,       KC_LALT,   KC_LBRC,KC_RBRC,MO(3),
                                                     KC_LCTRL, KC_DEL,
                                                              KC_HOME,
                                             KC_LGUI,KC_LALT,  KC_END,
        // right hand
       KC__VOLUP,    KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS,
       KC_MPLY  ,	   KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_BSLS,
                     KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
       KC__VOLUP,    KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_ENTER,
                             MO(4),  KC_LEFT, KC_DOWN,KC_UP,   KC_RIGHT,
KC_DEL , KC_NO,
KC_PGUP,
KC_PGDN, KC_BSPACE, KC_SPACE
    ),
[WIND] = LAYOUT_ergodox(  // layer 1 : Windows
    // left hand
    KC_EQL,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_ESC,
    KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC_MPLY,
    MO(3),          KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
    KC_LSFT,        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC__VOLDOWN,
    KC_GRV,       KC_LALT,   KC_LBRC,KC_RBRC,MO(3),
                                                 KC_LGUI, KC_DEL,
                                                          KC_HOME,
                                         KC_LCTRL,KC_LALT,  KC_END,
    // right hand
   KC__VOLUP,    KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS,
   KC_MPLY  ,	   KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_BSLS,
                 KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,
   KC__VOLUP,    KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_ENTER,
                         MO(4),  KC_LEFT, KC_DOWN,KC_UP,   KC_RIGHT,
  KC_DEL , KC_NO,
  KC_PGUP,
  KC_PGDN, KC_BSPACE, KC_SPACE
  ),
[GAME] = LAYOUT_ergodox(  // layer 2 : Gaming
        // left hand
        KC_ESC,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC__VOLUP,
        KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC__VOLDOWN,
        MO(3),          KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSFT,        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC__VOLDOWN,
        KC_LCTRL,       KC_TRNS,      KC_TRNS,KC_TRNS,MO(3),
                                              KC_LCTRL,  KC_DEL,
                                                              KC_HOME,
                                               KC_SPACE,KC_LALT,KC_END,
         // right hand
              KC__VOLUP,    KC_6,   KC_7,   KC_8,   KC_9,   KC_0,             KC_MINS,
              KC_MPLY,	  KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,             KC_BSLS,
                           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT,
              KC__VOLUP,KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,   KC_ENTER,
                                   MO(4),KC_LEFT,KC_UP,  KC_DOWN,KC_RIGHT,
              KC_DEL,        KC_NO,
              KC_PGUP,
              KC_PGDN,KC_BSPACE, KC_SPACE
),
// LOWER
[LWR] = LAYOUT_ergodox(
       // left hand
       VRSN,   KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
       KC_TRNS,KC_EXLM,KC_AT,  KC_LCBR,KC_RCBR,KC_PIPE,KC_TRNS,
       KC_TRNS,KC_HASH,KC_DLR, KC_LPRN,KC_RPRN,KC_GRV,
       KC_CLCK,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,KC_TRNS,
       EPRM,KC_TRNS,KC_TRNS,KC_TRNS,MO(3),
                                       RGB_MOD,KC_TRNS,
                                               KC_TRNS,
                               RGB_VAD,RGB_VAI,KC_TRNS,
       // right hand
       KC_TRNS, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,
       KC_TRNS, KC_UP,   KC_7,   KC_8,    KC_9,    KC_ASTR, KC_F12,
                KC_DOWN, KC_4,   KC_5,    KC_6,    KC_PLUS, KC_TRNS,
       KC_TRNS, KC_AMPR, KC_1,   KC_2,    KC_3,    KC_BSLS, KC_TRNS,
                         MO(5),KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_DEL, KC_NO,
       KC_TRNS,
       KC_TRNS, RGB_HUD, KC_0
),
// RAISE
[RSE] = LAYOUT_ergodox(
       // left hand
       VRSN,   KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
       KC_TRNS,KC_EXLM,KC_AT,  KC_LCBR,KC_RCBR,KC_PIPE,KC_TRNS,
       KC_TRNS,KC_HASH,KC_DLR, KC_LPRN,KC_RPRN,KC_GRV,
       KC_TRNS,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,KC_TRNS,
       EPRM,KC_TRNS,KC_TRNS,KC_TRNS,MO(5),
                                       RGB_MOD,KC_TRNS,
                                               KC_TRNS,
                               RGB_VAD,RGB_VAI,KC_TRNS,
       // right hand
       KC_TRNS, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,
       KC_TRNS, KC_UP,   KC_7,   KC_8,    KC_9,    KC_ASTR, KC_F12,
                KC_DOWN, KC_4,   KC_5,    KC_6,    KC_PLUS, KC_TRNS,
       KC_TRNS, KC_AMPR, KC_1,   KC_2,    KC_3,    KC_BSLS, KC_TRNS,
                         MO(4),KC_DOT,  KC_0,    KC_EQL,  KC_TRNS,
       KC_DEL, KC_NO,
       KC_TRNS,
       KC_TRNS, RGB_HUD, KC_0
),
// ADJUST
[ADJ] = LAYOUT_ergodox(
       // left hand
       VRSN,   KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
       KC_TRNS,KC_EXLM,KC_TRNS,  KC_LCBR,KC_RCBR,KC_PIPE,TG(0),
       KC_TRNS,KC_HASH,KC_DLR, KC_LPRN,KC_RPRN,KC_TRNS,
       KC_TRNS,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,TG(1),
       EPRM,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       RGB_MOD,KC_TRNS,
                                               KC_TRNS,
                               RGB_VAD,RGB_VAI,KC_TRNS,
       // right hand
       KC_TRNS, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,
       TG(2),   KC_UP,   KC_7,   KC_8,    KC_9,    KC_ASTR, KC_F12,
                KC_DOWN, KC_4,   KC_5,    KC_6,    KC_PLUS, KC_TRNS,
       KC_TRNS, KC_AMPR, KC_1,   KC_2,    KC_3,    KC_BSLS, KC_TRNS,
                         KC_TRNS,KC_DOT,  KC_0,    KC_EQL,  KC_TRNS,
       KC_DEL, KC_NO,
       KC_TRNS,
       KC_TRNS, RGB_HUD, KC_0
),
};

const uint16_t PROGMEM fn_actions[] = {
    [3] = ACTION_LAYER_TAP_TOGGLE(LWR),                // FN1 - Momentary Layer 1 (Lower)
    [4] = ACTION_LAYER_TAP_TOGGLE(RSE),                // FN2 - Momentary Layer 2 (Raise)
    [5] = ACTION_LAYER_TAP_TOGGLE(ADJ)                // FN3 - Momentary Layer 3 (Adjust)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
        case 1:
        if (record->event.pressed) { // For resetting EEPROM
          eeconfig_init();
        }
        break;
      }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 3:
            ergodox_right_led_1_on();
            break;
        case 4:
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 6  :
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }

};
