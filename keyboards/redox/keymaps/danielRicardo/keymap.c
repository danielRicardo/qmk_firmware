#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE_MAC 0
#define _BASE_WIN 1
#define _NUMS_AND_MOUSE 2
#define _NAV 3

enum custom_keycodes {
  BASE_MAC = SAFE_RANGE,
  BASE_WIN,
  NUMS_AND_MOUSE,
  NAV,
};

// Shortcut to make keymap more readable
#define CTL_ESC LCTL_T(KC_ESC)
#define F_L2 LT(2, KC_F)
#define ALT_QUT RALT_T(KC_QUOT)
#define CAG_MENU LCAG_T(KC_APP)
#define PIPE_L2 LT(2,KC_PIPE)
#define EQL_L3 LT(3,KC_EQL)
#define LNG_SW LGUI(KC_SPC)
#define LAUNCHER LALT(KC_SPC)
#define ALT_STAR LALT_T(KC_PAST)
#define HYPER_MIN ALL_T(KC_MINS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE_MAC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_EQL  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_LBRC ,                          KC_RBRC ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_MINS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     CTL_ESC ,KC_A    ,KC_S    ,KC_D    ,F_L2    ,KC_G    ,KC_LPRN ,                          KC_RPRN ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,ALT_QUT ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     MO(3)   ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,CAG_MENU,KC_LSFT ,        KC_DEL  ,PIPE_L2 ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,EQL_L3  ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     LNG_SW  ,LAUNCHER,KC_PMNS ,ALT_STAR,     KC_LGUI ,    KC_SPC  ,KC_BSPC ,        KC_RSFT ,KC_ENT  ,   HYPER_MIN,     KC_APP  ,KC_RGUI ,TG(4)   ,TG(1)
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_BASE_WIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                                           KC_TRNS  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                         KC_TRNS  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                         KC_TRNS  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_VOLD ,KC_VOLU ,        KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_LSFT ,KC_LALT ,     KC_LCTL ,    KC_TRNS ,KC_TRNS ,        KC_TRNS ,KC_TRNS ,    KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_NUMS_AND_MOUSE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
	   KC_MPLY ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                                            KC_TRNS ,KC_TRNS ,KC_PSLS ,KC_PAST ,KC_PMNS ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_VOLU ,KC_TRNS ,KC_MS_U ,KC_TRNS ,KC_WH_U ,KC_TRNS ,KC_TRNS ,                          KC_TRNS ,KC_NO   ,KC_P7   ,KC_P8   ,KC_P9   ,KC_PPLS ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_VOLD ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_WH_D ,KC_TRNS ,KC_TRNS ,                          KC_TRNS ,KC_NO   ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PENT ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,        KC_TRNS ,KC_TRNS ,KC_NO   ,KC_P1   ,KC_P2   ,KC_P3   ,KC_PENT ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_MRWD ,KC_MFFD ,KC_TRNS ,KC_BTN3 ,     KC_BTN1 ,    KC_BTN2 ,KC_TRNS ,        KC_TRNS ,KC_TRNS ,    KC_P0   ,     KC_P0   ,KC_PDOT ,KC_TRNS ,KC_TRNS
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_NAV] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10   ,KC_F11 ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO   ,KC_NO   ,KC_MS_U ,KC_NO   ,KC_WH_U ,KC_NO   ,KC_TRNS ,                          KC_TRNS ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_F12  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO   ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_WH_D ,KC_NO   ,KC_TRNS ,                          KC_TRNS ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RGHT ,KC_NO   ,KC_NO   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_BTN3 ,KC_TRNS ,KC_TRNS ,        KC_TRNS ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,     KC_BTN1 ,    KC_BTN2 ,KC_TRNS ,        KC_TRNS ,KC_TRNS ,    KC_NO   ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  )
};
