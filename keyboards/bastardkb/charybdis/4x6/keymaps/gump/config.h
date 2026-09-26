/**
 * Personal keymap for @Gump17928. Adapted from BastardKB vendor keymap.
 */
#pragma once

#ifdef VIA_ENABLE
/* Bump layer count to 5 to expose ADJUST via VIA. */
#    define DYNAMIC_KEYMAP_LAYER_COUNT 5
#endif

#ifndef __arm__
#    define NO_ACTION_ONESHOT
#endif

#ifdef AUTO_MOUSE_DEFAULT_LAYER
#    undef AUTO_MOUSE_DEFAULT_LAYER
#endif
#define AUTO_MOUSE_DEFAULT_LAYER 3

#ifdef LED_DPI_INDICATOR_INDEX
#    undef LED_DPI_INDICATOR_INDEX
#endif
#define LED_DPI_INDICATOR_INDEX 1

#ifdef RGBLIGHT_LED_COUNT
#    undef RGBLIGHT_LED_COUNT
#endif
#define RGBLIGHT_LED_COUNT 56

#ifdef POINTING_DEVICE_ENABLE
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif
