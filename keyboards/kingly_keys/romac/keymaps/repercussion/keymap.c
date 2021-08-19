/* Copyright 2019 Jarred Steenvoorden
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
        SWAN,
        IINA,
        NAVI
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
        case SWAN:
                if (record->event.pressed) {
                        // when keycode SPTFY is pressed
                        SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
                        _delay_ms(100);
                        SEND_STRING("Swan");
                        _delay_ms(100);
                        SEND_STRING(SS_TAP(X_ENTER));
                } else {
                        // when keycode QMKBEST is released
                }
                break;
        case IINA:
                if (record->event.pressed) {
                        // when keycode SPTFY is pressed
                        SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
                        _delay_ms(100);
                        SEND_STRING("IINA");
                        _delay_ms(100);
                        SEND_STRING(SS_TAP(X_ENTER));
                } else {
                        // when keycode QMKBEST is released
                }
                break;
        case NAVI:
                if (record->event.pressed) {
                        // when keycode SPTFY is pressed
                        SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
                        _delay_ms(100);
                        SEND_STRING("Navidrome");
                        _delay_ms(100);
                        SEND_STRING(SS_TAP(X_ENTER));
                } else {
                        // when keycode QMKBEST is released
                }
                break;
        }
        return true;
};

#define _BASE 0
#define _FN1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		KC__MUTE, KC_VOLD  , KC_VOLU , \
		KC_MPRV, KC_MPLY, KC_MNXT, \
		NAVI , SPTFY, IINA , \
		LT(_FN1, KC_DOT), DAC, SWAN    \
	),

	[_FN1] = LAYOUT(
		KC_7, KC_8, KC_9, \
		KC_4, KC_5, KC_6, \
		KC_1, KC_2, KC_3, \
		KC_0, KC_DOT, KC_ENT \
	)
};
