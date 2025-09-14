// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#undef STM32_HSECLK
#define STM32_HSECLK 16000000

#define TAPPING_TOGGLE 2
#define DYNAMIC_KEYMAP_LAYER_COUNT 9
#define DYNAMIC_KEYMAP_MACRO_COUNT 15

#define WS2812_PWM_DRIVER PWMD3              // default: PWMD2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2 // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 5                 // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.

#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)

#define USB_POLLING_INTERVAL_MS 1
