#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

// In milliseconds
//#define OLED_SCROLL_TIMEOUT 40000
#define OLED_TIMEOUT 100000
// Without this clockwise seems to be reversed
#define ENCODER_DIRECTION_FLIP
