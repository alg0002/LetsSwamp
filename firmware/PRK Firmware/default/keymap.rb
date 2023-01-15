puts("  Name: Let's Swamp")
puts("  Board: RP2040-Zero")
puts("  Designed by alg")

kbd = Keyboard.new
kbd.split = true
kbd.uart_pin = 1
kbd.set_anchor(:left)

# キーマトリクス初期化
kbd.init_pins(
    [ 26, 15, 14, 13 ], # row
    [  2,  5,  6,  7,  8,  9 ]  # col
)

# デフォルトレイヤーは最初に追加する必要がある
#   L-col0   L-col1   L-col2   L-col3  L-col4  L-col5      R-col0  R-col1  R-col2   R-col3   R-col4  R-col5
kbd.add_layer :default, %i[
    KC_ESC   KC_Q     KC_W     KC_E    KC_R    KC_T        KC_Y    KC_U    KC_I     KC_O     KC_P    KC_LBRC
    KC_MINUS KC_A     KC_S     KC_D    KC_F    KC_G        KC_H    KC_J    KC_K     KC_L     KC_SCLN KC_QUOT
    KC_TAB   KC_Z     KC_X     KC_C    KC_V    KC_B        KC_N    KC_M    KC_COMM  KC_DOT   KC_SLSH KC_INT1
    L2_ZKHK  KC_LGUI  KC_LALT  MU_LSFT ET_LCTL L1_SPC      L1_SPC  ET_RCTL HE_RSFT  KC_RALT  KC_RGUI L2_APP
]
#   L-col0   L-col1   L-col2   L-col3  L-col4  L-col5      R-col0  R-col1  R-col2   R-col3   R-col4  R-col5
kbd.add_layer :layer1, %i[
    KC_ESC   KC_COLON KC_MINUS KC_DQUO KC_SLSH KC_UNDS     KC_HOME KC_PGUP KC_PGDN  KC_END   KC_INS  KC_PSCREEN
    KC_TAB   KC_1     KC_2     KC_3    KC_4    KC_5        KC_LEFT KC_DOWN KC_UP    KC_RIGHT KC_EQL  KC_INT3
    KC_CAPS  KC_6     KC_7     KC_8    KC_9    KC_0        KC_N    KC_M    KC_COMM  KC_DOT   KC_SLSH KC_INT1
    L2_ZKHK  KC_LGUI  KC_LALT  MU_LSFT KC_BSPC L1_SPC      L1_SPC  KC_DEL  HE_RSFT  KC_RALT  KC_RGUI L2_APP
]
#   L-col0   L-col1   L-col2   L-col3  L-col4  L-col5      R-col0  R-col1  R-col2   R-col3   R-col4  R-col5
kbd.add_layer :layer2, %i[
    KC_ESC   KC_Q     KC_W     KC_E    KC_R    KC_T        KC_Y    KC_RCBR KC_PIPE  KC_AMPR  KC_P    KC_LBRC
    KC_MINUS KC_F1    KC_F2    KC_F3   KC_F4   KC_F5       KC_F11  KC_RBRC KC_BSLS  KC_AT    KC_SCLN KC_QUOT
    KC_TAB   KC_F6    KC_F7    KC_F8   KC_F9   KC_F10      KC_F12  KC_ASTER KC_LPRN KC_LCBR  KC_SLSH KC_INT1
    L2_ZKHK  KC_LGUI  KC_LALT  MU_LSFT ET_LCTL L1_SPC      L1_SPC  ET_RCTL HE_RSFT  KC_RALT  KC_RGUI L2_APP
]

# レイヤー用モードキー
kbd.define_mode_key :L1_SPC, [ :KC_SPC,         :layer1, 200, 200 ]
kbd.define_mode_key :L2_ZKHK,[ :KC_ZKHK,        :layer2, 200, 200 ]
kbd.define_mode_key :L2_APP, [ :KC_APPLICATION, :layer2, 200, 200 ]
# それ以外のモードキー
kbd.define_mode_key :MU_LSFT,[ :KC_MHEN,        :KC_LSFT, 200, 200 ]
kbd.define_mode_key :ET_LCTL,[ :KC_ENTER,       :KC_LCTL, 200, 200 ]
kbd.define_mode_key :ET_RCTL,[ :KC_ENTER,       :KC_RCTL, 200, 200 ]
kbd.define_mode_key :HE_RSFT,[ :KC_HENK,        :KC_RSFT, 200, 200 ]

# RGBLED
rgb = RGB.new(
    0,      # ピン番号
    12,     # アンダーグロウのLED数
    0,      # バックライトのLED数
    false   # true:32bit  false:24bit
)
rgb.effect     = :static
rgb.speed      = 31  # 1 - 31  / デフォルト:22
rgb.hue        = 36  # 0 - 100 / デフォルト:0
rgb.saturation = 83  # 0 - 100 / デフォルト:100
rgb.value      = 1   # 1 - 31  / デフォルト:13
#kbd.append rgb

# キーボード起動！
kbd.start!
