#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,

  DISCO_TOGGLE,

  N9, // 9️⃣
  L_Q, // 🏳️‍🌈
  L_W, // 🤷‍♀️
      // L_T, // 💁‍♀️
  L_U, // ☝️
      // L_B, // ‼️
};

enum unicode_names {
  EM_DASH,
  EN_DASH,

  ARIES,
  TAURUS,
  GEMINI,
  CANCER,
  LEO,
  VIRGO,
  LIBRA,
  SCORPIO,
  SAGITTARIUS,
  CAPRICORN,
  AQUARIUS,
  PISCES,

  MERCURY,
  VENUS,
  MARS,
  JUPITER,
  SATURN,
  URANUS,
  NEPTUNE,
  PLUTO,

  STARS_LEFT,
  STARS_RIGHT,

  METEOR,
  MOON,
  STAR,
  PLANET,
  SPARKLE,
  SH_STAR,

  LEFT,
  RIGHT,
  UP,
  DOWN,

  N0,
  N1,
  N2,
  N3,
  N4,
  N5,
  N6,
  N7,
  N8,

  L_E,
  L_R,
  L_T,
  L_Y,
  L_I,
  L_O,
  L_P,
  L_A,
  L_S,
  L_D,
  L_F,
  L_G,
  L_H,
  L_J,
  L_K,
  L_L,
  L_SEMI,
  L_Z,
  L_X,
  L_C,
  L_V,
  L_B,
  L_N,
  L_M,
  L_LESS,
  L_GREATER,
  L_QUESTION,
  L_BACKTICK,
  L_QUOTE,
  L_LBRACKET,
  L_RBRACKET
};

const uint32_t PROGMEM unicode_map[] = {
  [EM_DASH] = 0x2014, // —
  [EN_DASH] = 0x2013, // –

  [ARIES] = 0x2648, // ♈
  [TAURUS] = 0x2649, // ♉
  [GEMINI] = 0x264A, // ♊
  [CANCER] = 0x264B, // ♋
  [LEO] = 0x264C, // ♌
  [VIRGO] = 0x264D, // ♍
  [LIBRA] = 0x264E, // ♎
  [SCORPIO] = 0x264F, // ♏
  [SAGITTARIUS] = 0x2650, // ♐
  [CAPRICORN] = 0x2651, // ♑
  [AQUARIUS] = 0x2652, // ♒
  [PISCES] = 0x2653, // ♓

  [MERCURY] = 0x263F, // ☿
  [VENUS] = 0x2640, // ♀
  [MARS] = 0x2642, // ♂
  [JUPITER] = 0x2643, // ♃
  [SATURN] = 0x2644, // ♄
  [URANUS] = 0x2645, // ♅
  [NEPTUNE] = 0x2646, // ♆
  [PLUTO] = 0x2647, // ♇

  [METEOR] = 0x2604, // ☄
  [MOON] = 0x1F319, // 🌙
  [STAR] = 0x2B50, // ⭐
  [PLANET] = 0x1fa90, // 🪐
  [SPARKLE] = 0x2728, // ✨
  [SH_STAR] = 0x1F4AB, // 💫
  [STARS_LEFT] = 0x1F30C, // 🌌
  [STARS_RIGHT] = 0x1F303, // 🌃

  [LEFT] = 0x2190, // ←
  [RIGHT] = 0x2192, // →
  [UP] = 0x2191, // ↑
  [DOWN] = 0x2193, // ↓

  [N0] = 0x3007, // 〇
  [N1] = 0x1f947, // 🥇
  [N2] = 0x1f948, // 🥈
  [N3] = 0x1f949, // 🥉
  [N4] = 0x24f8, // ⓸
  [N5] = 0x2464, // ⑤
  [N6] = 0x2479, // ⑹
  [N7] = 0x277c, // ❼
  [N8] = 0x1d7e0, // 𝟠,

      // [L_E] = 0x1f92f, // 🤯
  [L_E] = 0x2248, // ≈
      // [L_R] = 0x1f60c, // 😌
  [L_R] = 0xae, // ®
  [L_T] = 0x2122, // ™
  [L_Y] = 0x1f44d, // 👍
      // [L_I] = 0x1f607, // 😇
  [L_I] = 0x221e, // ∞
  [L_O] = 0x1f605, // 😅
  [L_P] = 0x1f97a, // 🥺
  [L_A] = 0x1f614, // 😔
  [L_S] = 0x1f62d, // 😭
      // [L_D] = 0x1f495, // 💕
  [L_D] = 0xb0, // °
  [L_F] = 0x1f496, // 💖
  [L_G] = 0x1f49a, // 💚
  [L_H] = 0x1f64c, // 🙌
  [L_J] = 0x1f602, // 😂
  [L_K] = 0x1f431, // 🐱
      // [L_L] = 0x1f973, // 🥳
  [L_L] = 0x3bb, // λ
  [L_SEMI] = 0x1f389, // 🎉
  [L_Z] = 0x2705, // ✅
  [L_X] = 0x274c, // ❌
      // [L_C] = 0x1f44f, // 👏
  [L_C] = 0xa9, // ©
  [L_V] = 0x1f338, // 🌸
  [L_B] = 0x2022, // •
  [L_N] = 0x1f44e, // 👎
  [L_M] = 0x1f648, // 🙈
  [L_LESS] = 0x2039, // ‹
  [L_GREATER] = 0x203a, // ›
      // [L_QUESTION] = 0x2753, // ❓
  [L_QUESTION] = 0xf7, // ÷
  [L_BACKTICK] = 0x1f644, // 🙄
  [L_QUOTE] = 0x1f643, // 🙃
      // [L_LBRACKET] = 0x263A, // ☺️
      // [L_RBRACKET] = 0x1F633 // 😳
  [L_LBRACKET] = 0x1f4c8, // 📈
  [L_RBRACKET] = 0x1f4c9 // 📉
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(2),                                          TG(1),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           X(EM_DASH),                                     KC_ESCAPE,      KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    MO(1),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_MINUS,                                       KC_EQUAL,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_LCTRL,       LALT_T(KC_GRAVE),LT(3,KC_QUOTE), KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        LT(3,KC_LBRACKET),RALT_T(KC_RBRACKET),KC_RCTRL,
                                                                                                    KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
                                                                                                                    KC_MEDIA_PLAY_PAUSE,KC_AUDIO_MUTE,
                                                                                    KC_SPACE,       KC_BSPACE,      KC_LGUI,        KC_RGUI,        KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        X(EN_DASH),                                     KC_CAPSLOCK,    KC_BSLASH,      KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,                                                                       KC_UNDS,        KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_UP,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_0,           KC_DOT,         KC_LEFT,        KC_DOWN,        KC_RIGHT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        RGB_HUD,        RGB_HUI,        RGB_MOD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_SLD,        RGB_SAD,        RGB_SAI,        RGB_SPD,        RGB_SPI,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, DISCO_TOGGLE,                                   TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    WEBUSB_PAIR,    LGUI(LSFT(KC_T)),LGUI(KC_T),     LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),                                                                                                   KC_PGUP,        KC_PGDOWN,      LGUI(KC_LBRACKET),LGUI(KC_RBRACKET),LGUI(KC_L),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1
  ),
  // layer for astrolokeys -- each symbol on the keycaps will produce its character, other keys produce my frequently-used emojis. macOS keyboard input settings must be Unicode Hex Input
  [3] = LAYOUT_ergodox_pretty(
    X(ARIES),      X(N1),          X(N2),          X(N3),          X(N4),          X(N5),           X(VIRGO),                                       X(LIBRA),     X(N6),          X(N7),          X(N8),          N9,             X(N0),          X(SCORPIO),
    X(TAURUS),     L_Q,            L_W,            X(L_E),         X(L_R),         X(L_T),          X(MERCURY),                                     X(PLUTO),     X(L_Y),         L_U,            X(L_I),         X(L_O),         X(L_P),         X(SAGITTARIUS),
    X(GEMINI),     X(L_A),         X(L_S),         X(L_D),         X(L_F),         X(L_G),                                                                        X(L_H),         X(L_J),         X(L_K),         X(L_L),         X(L_SEMI),      X(CAPRICORN),
    X(CANCER),     X(L_Z),         X(L_X),         X(L_C),         X(L_V),         X(L_B),          X(VENUS),                                       X(NEPTUNE),   X(L_N),         X(L_M),         X(L_LESS),      X(L_GREATER),   X(L_QUESTION),  X(AQUARIUS),
    X(LEO),        X(L_BACKTICK),  X(L_QUOTE),     X(LEFT),        X(RIGHT),                                                                                                      X(UP),          X(DOWN),        X(L_LBRACKET),  X(L_RBRACKET),  X(PISCES),
                                                                                                    X(MARS),       X(JUPITER),     X(SATURN),       X(URANUS),
                                                                                                                   X(MOON),        X(PLANET),
                                                                                   X(STARS_LEFT),   X(METEOR),     X(STAR),        X(SPARKLE),      X(SH_STAR),   X(STARS_RIGHT)
  ),
};


rgblight_config_t rgblight_config;
bool disable_layer_color = 1;

bool suspended = false;

struct disco_state {
  uint8_t led_hue;
  uint8_t animation_progress; // 255 at beginning of animation, decrements down to 0
  uint8_t animation_center_index;
  uint8_t num_keys_held_down;
};

bool disco_mode_enabled = 0;
uint16_t animation_timer;
struct disco_state disco_left;
struct disco_state disco_right;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
        disco_mode_enabled = 0;
      }
      return false;

    case RGB_TOG:
    case RGB_MOD:
      disco_mode_enabled = 0;
      disable_layer_color = 1;
      return true; // Don't override default behavior

    case DISCO_TOGGLE:
      if (record->event.pressed) {
        disco_mode_enabled ^= 1;
        disable_layer_color = 1;

        disco_left.animation_progress = 0;
        disco_left.num_keys_held_down = 0;
        disco_right.animation_progress = 0;
        disco_right.num_keys_held_down = 0;

        rgblight_enable_noeeprom();
        rgblight_mode_noeeprom(1);
        rgblight_sethsv_noeeprom(0,0,0);
      }
      return false;

    // https://sevenseacat.net/posts/2018/unicode-in-qmk-on-osx/
    // since unicode map only supports up to 0x10FFFF
    case N9:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT("0039+fe0f+20e3")); // 9️⃣
      }
      return false;
    case L_Q:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT("d83c+dff3+fe0f+200d+d83c+df08")); // 🏳️‍🌈
      }
      return false;
    case L_W:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT("d83e+dd37+200d+2640+fe0f")); // 🤷‍♀️
      }
      return false;
    /*
    case L_T:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT("d83d+dc81+200d+2640+fe0f")); // 💁‍♀️ 0001f481+0000200d+0000264+00000fe0f utf32 -> utf16
      }
      return false;
    */
    case L_U:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT("261d+fe0f")); // ☝️
      }
      return false;
    /*
    case L_B:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT("203c+fe0f")); // ‼️
      }
      return false;
    */
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    switch (layer) {
      case 0:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(184,247,179);
        }
        break;
      case 1:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(234,164,249);
        }
        break;
      case 2:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(28,211,255);
        }
        break;
      case 3:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(147,255,255);
        }
        break;
      default:
        if(!disable_layer_color) {
          rgblight_config.raw = eeconfig_read_rgblight();
          if(rgblight_config.enable == true) {
            rgblight_enable();
            rgblight_mode(rgblight_config.mode);
            rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
          }
          else {
            rgblight_disable();
          }
        }
        break;
    }
    return state;

};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}

// Absolute value of (a - b) for unsigned values
#define DIST(a, b) ((a) > (b) ? (a) - (b) : (b) - (a))

// Easing function defined from 0 to 255 (rather than 0.0 to 1.0)
#define CUBIC_EASE(x) ((uint32_t)(x) * (x) * (x) / 255 / 255)

// Calculates the led value (brightness). leds closer to the "animation center led" are brighter.
#define DISCO_LED_VALUE(animation_progress, led_index, animation_center_index) ( \
  CUBIC_EASE(animation_progress) * \
  5 / (5 + DIST(led_index, animation_center_index)) \
)

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (disco_mode_enabled) {
    if (record->event.pressed) {
      if (record->event.key.row < 7) {
        disco_left.led_hue = rand() % 255;
        disco_left.animation_progress = 255;
        disco_left.animation_center_index = 30 - (record->event.key.row * 2 + 2);
        disco_left.num_keys_held_down++;

        for (uint8_t led_index = (uint8_t)RGBLED_NUM / 2; led_index < (uint8_t)RGBLED_NUM; led_index++) {
          sethsv(
            disco_left.led_hue,
            255,
            DISCO_LED_VALUE(disco_left.animation_progress, led_index, disco_left.animation_center_index),
            &led[led_index]
          );
        }
      } else {
        disco_right.led_hue = rand() % 255;
        disco_right.animation_progress = 255;
        disco_right.animation_center_index = (13 - record->event.key.row) * 2 + 1;
        disco_right.num_keys_held_down++;

        for (uint8_t led_index = 0; led_index < (uint8_t)RGBLED_NUM / 2; led_index++) {
          sethsv(
            disco_right.led_hue,
            255,
            DISCO_LED_VALUE(disco_right.animation_progress, led_index, disco_right.animation_center_index),
            &led[led_index]
          );
        }
      }

      rgblight_set();
    } else {
      if (record->event.key.row < 7) {
        if (disco_left.num_keys_held_down > 0) {
          disco_left.num_keys_held_down--;
        }
      } else {
        if (disco_right.num_keys_held_down > 0) {
          disco_right.num_keys_held_down--;
        }
      }
    }
  }
}

void matrix_init_user(void) {
  animation_timer = timer_read();
}

void matrix_scan_user(void) {
  if (
    disco_mode_enabled &&
    (disco_left.animation_progress > 0 || disco_right.animation_progress > 0) &&
    timer_elapsed(animation_timer) > 20
  ) {
    animation_timer = timer_read();

    if (disco_left.num_keys_held_down == 0 && disco_left.animation_progress > 0) {
      disco_left.animation_progress -= 5;

      for (uint8_t led_index = (uint8_t)RGBLED_NUM / 2; led_index < (uint8_t)RGBLED_NUM; led_index++) {
        sethsv(
          disco_left.led_hue,
          255,
          DISCO_LED_VALUE(disco_left.animation_progress, led_index, disco_left.animation_center_index),
          &led[led_index]
        );
      }
    }

    if (disco_right.num_keys_held_down == 0 && disco_right.animation_progress > 0) {
      disco_right.animation_progress -= 5;

      for (uint8_t led_index = 0; led_index < (uint8_t)RGBLED_NUM / 2; led_index++) {
        sethsv(
          disco_right.led_hue,
          255,
          DISCO_LED_VALUE(disco_right.animation_progress, led_index, disco_right.animation_center_index),
          &led[led_index]
        );
      }
    }

    rgblight_set();
  }
}
