/* Copyright 2019 Danny Nguyen <danny@keeb.io>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
enum custom_keycodes {
        SPTFY = SAFE_RANGE,
        DAC,
        STICKS,
        AIRSONIC,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
        switch (keycode) {
        case SPTFY:
                if (record->event.pressed) {
                        // when keycode SPTFY is pressed
                        SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
                        _delay_ms(100);
                        SEND_STRING("Spotify");
                        _delay_ms(100);
                        SEND_STRING(SS_TAP(X_ENTER));
                } else {
                        // when keycode QMKBEST is released
                }
                break;
        case DAC:
                if (record->event.pressed) {
                        // when keycode SPTFY is pressed
                        SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
                        _delay_ms(100);
                        SEND_STRING("DAC");
                        _delay_ms(100);
                        SEND_STRING(SS_TAP(X_ENTER));
                } else {
                        // when keycode QMKBEST is released
                }
                break;
        case STICKS:
                if (record->event.pressed) {
                        // when keycode SPTFY is pressed
                        SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
                        _delay_ms(100);
                        SEND_STRING("Sticks");
                        _delay_ms(100);
                        SEND_STRING(SS_TAP(X_ENTER));
                } else {
                        // when keycode QMKBEST is released
                }
                break;
        case AIRSONIC:
                if (record->event.pressed) {
                        // when keycode SPTFY is pressed
                        SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
                        _delay_ms(100);
                        SEND_STRING("Airsonic");
                        _delay_ms(100);
                        SEND_STRING(SS_TAP(X_ENTER));
                } else {
                        // when keycode QMKBEST is released
                }
                break;
        }
        return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
                KC_MUTE, KC_MPLY, OSL(1), \
                KC_MPRV, AIRSONIC,   KC_MNXT, \
                DAC, SPTFY, STICKS \
                ),
        [1] = LAYOUT(
                KC_TRNS, KC_TRNS, KC_ENTER, \
                KC_TRNS, KC_TRNS, KC_TRNS, \
                KC_TRNS, KC_TRNS, KC_TRNS \
                ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
        if (index == 0) {
                if (clockwise) {
                        tap_code(KC_VOLD);
                } else {
                        tap_code(KC_VOLU);
                }
        }
        else if (index == 1) {
                if (clockwise) {
                        tap_code(KC_UP);
                } else {
                        tap_code(KC_DOWN);
                }
        }
}
