#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layer {
  _MAC,
  _WINDOZE,
  _GAMES,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
  MAC = SAFE_RANGE,
  WINDOZE,
  GAMES,
  LOWER,
  RAISE,
  ADJUST,
};

#define KC_ KC_TRNS
#define KC_WNDZ WINDOZE
#define KC_MAC MAC
#define KC_GAME GAMES
#define KC_LOWR LOWER
#define KC_RASE RAISE
#define KC_ADJT ADJUST
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAC] = LAYOUT_kc(
    //,----+----+----+----+----+----+----.        ,----+----+----+----+----+----+----.
       EQL, Q,   W,   E,   R,   T,   ESC,          DEL, Y,   U,   I,   O,   P,   MINS,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       TAB, A,   S,   D,   F,   G,   NO,           DEL, H,   J,   K,   L,   SCLN,QUOT,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       LSFT,Z,   X,   C,   V,   B,   LALT,         BSPC,N,   M,   COMM,DOT, SLSH,ENT,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       LCTL,GRV, LBRC,RBRC,     LOWR,LGUI,         SPC, RASE,     LEFT,DOWN,UP,  RGHT
    //`----+----+----+----+----+----+----/        \----+----+----+----+----+----+----'
  ),

  [_WINDOZE] = LAYOUT_kc(
    //,----+----+----+----+----+----+----.        ,----+----+----+----+----+----+----.
       EQL, Q,   W,   E,   R,   T,   ESC,          DEL, Y,   U,   I,   O,   P,   MINS,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       TAB, A,   S,   D,   F,   G,   NO,           DEL, H,   J,   K,   L,   SCLN,QUOT,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       LSFT,Z,   X,   C,   V,   B,   LALT,         BSPC,N,   M,   COMM,DOT, SLSH,ENT,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       LGUI,GRV, LBRC,RBRC,     LOWR,LCTL,         SPC, RASE,     LEFT,DOWN,UP,  RGHT
    //`----+----+----+----+----+----+----/        \----+----+----+----+----+----+----'
  ),

  [_GAMES] = LAYOUT_kc(
    //,----+----+----+----+----+----+----.        ,----+----+----+----+----+----+----.
       EQL, Q,   W,   E,   R,   T,   ESC,          DEL, Y,   U,   I,   O,   P,   MINS,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       TAB, A,   S,   D,   F,   G,   GRV,          DEL, H,   J,   K,   L,   SCLN,QUOT,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       LSFT,Z,   X,   C,   V,   B,   LALT,         BSPC,N,   M,   COMM,DOT, SLSH,ENT,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       LCTL,1,   2,   3,        LOWR,SPC,          SPC, RASE,     LEFT,DOWN,UP,  RGHT
    //`----+----+----+----+----+----+----/        \----+----+----+----+----+----+----'
  ),

  [_LOWER] = LAYOUT_kc(
  //,----+----+----+----+----+----+----.        ,----+----+----+----+----+----+----.
     GRV, 1,   2,   3,   4,   5,   ESC,          DEL, 6,   7,   8,   9,   0,   PSLS,
  //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
     TAB, F1,  F2,  F3,  F4,  F5,  F6,           DEL, NO,  P4,  P5,  P6,  PAST,BSLS,
  //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
     LSFT,F7,  F8,  F9,  F10, F11, LALT,         BSPC,NO,  P1,  P2,  P3,  PMNS,PENT,
  //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
     LCTL,F12, F13, F14,      LOWR,LGUI,         BSPC,ADJT,     P0,  PDOT,PPLS,PENT
  //`----+----+----+----+----+----+----/        \----+----+----+----+----+----+----'
  ),

  [_RAISE] = LAYOUT_kc(
  //,----+----+----+----+----+----+----.        ,----+----+----+----+----+----+----.
     EQL, Q,   W,   E,   R,   T,   ESC,          DEL, Y,   U,   I,   O,   P,   MINS,
  //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
     TAB, A,   S,   D,   F,   G,   NO,           DEL, H,   J,   MRWD,NO,  MPLY,MFFD,
  //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
     LSFT,Z,   X,   C,   V,   B,   LALT,         BSPC,N,   M,   MUTE,VOLD,VOLU,ENT,
  //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
     LCTL,GRV, LBRC,RBRC,     ADJT,LGUI,         SPC, RASE,     HOME,PGDN,PGUP,END
  //`----+----+----+----+----+----+----/        \----+----+----+----+----+----+----'
  ),
  [_ADJUST] = LAYOUT_kc(
    //,----+----+----+----+----+----+----.        ,----+----+----+----+----+----+----.
       GAME,Q,   W,   E,   R,   T,   ESC,          DEL, Y,   U,   I,   O,   P,   MINS,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       MAC, A,   S,   D,   F,   G,   NO,           DEL, H,   J,   K,   RSAD,RSAI,QUOT,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       WNDZ,Z,   X,   C,   V,   B,   LALT,         BSPC,N,   M,   COMM,RHUD,RHUI,RTOG,
    //|----+----+----+----+----+----+----|        |----+----+----+----+----+----+----|
       LCTL,GRV, LBRC,RBRC,     LOWR,LGUI,         SPC, RASE,     RMOD,RVAD,RVAI,RMOD
    //`----+----+----+----+----+----+----/        \----+----+----+----+----+----+----'
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAC:
      if (record->event.pressed) {
        // set_single_persistent_default_layer(_MAC);
        default_layer_set(1UL<<_MAC);
      }
      return false;
      break;
    case WINDOZE:
      if (record->event.pressed) {
        // set_single_persistent_default_layer(_WINDOZE);
        default_layer_set(1UL<<_WINDOZE);
      }
      return false;
      break;
    case GAMES:
      if (record->event.pressed) {
        // set_single_persistent_default_layer(_GAMES);
        default_layer_set(1UL<<_GAMES);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
    }
  return true;
}
