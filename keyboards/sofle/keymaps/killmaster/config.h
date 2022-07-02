/* Copyright 2021 Carlos Martins
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
#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define RGB_DI_PIN D3

#ifdef OLED_ENABLE 
   #define SPLIT_OLED_ENABLE
   #define OLED_TIMEOUT 10000
   #define OLED_FADE_OUT
   #define OLED_FADE_OUT_INTERVAL 10
   #define OLED_BRIGHTNESS 100
#endif
#define MEDIA_KEY_DELAY 2

#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

#if defined UNICODEMAP_ENABLE || defined UCIS_ENABLE
#define UNICODE_SELECTED_MODES UC_WINC
#define UCIS_MAX_CODE_POINTS 15
#endif
