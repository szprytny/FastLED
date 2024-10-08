
#pragma once

#ifndef FASTLED_ESP32_COMPONENT_LED_STRIP_BUILT_IN_COMPILE_PROBLEMATIC_CODE
#define FASTLED_ESP32_COMPONENT_LED_STRIP_BUILT_IN_COMPILE_PROBLEMATIC_CODE 0
#endif

#ifndef FASTLED_ESP32_COMPONENT_LED_STRIP_FORCE_IDF4
#define FASTLED_ESP32_COMPONENT_LED_STRIP_FORCE_IDF4 0
#endif

#ifndef ESP32
// No led strip component when not in ESP32 mode.
#define FASTLED_ESP32_COMPONENT_LED_STRIP_BUILT_IN 0
#else
#if !defined(FASTLED_ESP32_COMPONENT_LED_STRIP_BUILT_IN)
#include "esp_idf_version.h"
#if ESP_IDF_VERSION >= ESP_IDF_VERSION_VAL(5, 0, 0)
#define FASTLED_ESP32_COMPONENT_LED_STRIP_BUILT_IN 0
#else
#define FASTLED_ESP32_COMPONENT_LED_STRIP_BUILT_IN 0
#endif  // ESP_IDF_VERSION
#endif  // FASTLED_ESP32_COMPONENT_LED_STRIP_BUILT_IN
#endif  // ESP32
