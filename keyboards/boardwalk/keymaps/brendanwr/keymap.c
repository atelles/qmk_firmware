/*
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

enum layer {
  _BASE,
  _FN,
  _BACKLIT
};


#define FN MO(_FN)
#define BACKLIT MO(_BACKLIT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
 * .-----------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | -      | +      | \      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [      | ]      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | LCTRL  | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      | ENTER  | HOME   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | RSHIFT | FN     | END    |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
 * |        | LALT  | LGUI       |                             SPACE                            | RGUI        | RALT    |        |
 * '-----------------------------------------------------------------------------------------------------------------------------'
 */

 [_BASE] = LAYOUT_ortho_7u(
  KC_ESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_BSLS,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC,  KC_BSPC,
  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,   KC_HOME,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  FN,       KC_END,
           KC_LALT, KC_LGUI,                                KC_SPC,                                 KC_RGUI, KC_RALT          
 ),

/* FUNCTION
 * .-----------------------------------------------------------------------------------------------------------------------------.
 * |        | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | `      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        |        |        |        |        |        |        |        |        |        | UP     |        |        | DEL    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * |        | VOLD   | VOLU   | MUTE   |        |        |        |        |        |        | LEFT   | RIGHT  |        | PG_UP  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * |        |        |        |        |        |        |        |        |        |        | DOWN   |        |        | PG_DN  |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
 * |        |       |            |                                                              |             |         |        |
 * '-----------------------------------------------------------------------------------------------------------------------------'
 */

 [_FN] = LAYOUT_ortho_7u(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,   KC_F11,  KC_F12,  KC_GRV,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,   _______, _______, KC_DEL,
  _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_RGHT, _______, KC_PGUP,
  BACKLIT, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DOWN, _______, _______, KC_PGDN,
          _______,  _______,                                  _______,                               _______, _______       
 ),

/* BACKLIT 
 * .-----------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        | RGBTOG | RGBMOD | RGBHUI | RGBHUD | RGBSAI | RGBSAD | RGBVAI | RGBVAD |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
 * |        |       |            |                                                              |             |         |        |
 * '-----------------------------------------------------------------------------------------------------------------------------'
 */

 [_BACKLIT] = LAYOUT_ortho_7u(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______,    , _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
          _______,  _______,                                  _______,                               _______, _______       
 )
};
