// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define WS2812_PWM_DRIVER PWMD3
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2
#define WS2812_DMA_CHANNEL 5

// delay for STM32F401
#undef MATRIX_IO_DELAY
#define MATRIX_IO_DELAY 50
