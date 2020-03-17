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

// Layer shorthand
enum layer {
  _1U,
  _FN
};

#define KC_CMDG LGUI(KC_GRV)  // command + `

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* 1uGrid
 * .-----------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | [      | ]      | Y      | U      | I      | O      | P      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | CAP LK | A      | S      | D      | F      | G      | HOME   | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   | FN     | LALT   | SPACE  | SPACE  | SPACE  | SPACE  | SPACE  | SPACE  | RIGHT  | DOWN   | UP     | RIGHT  |
 * '-----------------------------------------------------------------------------------------------------------------------------'
 */

 [_1U] = LAYOUT_ortho_5x14(
  KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS,  KC_EQL,   KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_LBRC, KC_RBRC,   KC_BSLS, \
  KC_LALT, KC_A,    KC_S,    KC_D,   KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,   KC_QUOT,  KC_ENT,   KC_HOME, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   KC_RSFT,   KC_UP,    KC_END, \
  KC_LCTL, KC_LCTL, KC_LALT, KC_LGUI,  MO(1), KC_SPC,    KC_SPC,  MO(1),  KC_RGUI,KC_RALT, KC_RCTL,   KC_LEFT, KC_DOWN,   KC_RGHT  \
 ),

/* FUNCTION
 * .-----------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '-----------------------------------------------------------------------------------------------------------------------------'
 */


 [_FN] = LAYOUT_ortho_5x14(
  KC_CMDG,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,   KC_F11, KC_F12, _______, \
  _______,   RESET, _______, _______, _______, _______, _______, _______,    KC_7,    KC_8,    KC_9, _______, _______, _______, \
  _______, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, RGB_MOD, _______, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC,  KC_GRV, _______, _______, \
  _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______,    KC_1,    KC_2,    KC_3, _______, _______, _______, \
  _______, _______, _______, _______, _______, KC_MPLY, KC_MPLY,    KC_0,    KC_0, KC_COMM, KC_COMM, _______, _______, _______
 )
};

