
#ifndef DISPLAY_H
#define DISPLAY_H

#include "cmsis/cmsis_device.h"

// --- Public Global Variables ---
// These are *defined* in main.c, but the display.c
// file needs to know they exist to read them.
// Mark them volatile because they are updated in ISRs
// and read from other translation units.
extern volatile unsigned int Freq;
extern volatile unsigned int Res;

// --- Public Function Prototypes ---

/**
 * @brief Initializes all GPIO, SPI2, and Timer peripherals
 * required for the OLED display.
 */
void oled_config(void);

/**
 * @brief Clears the display and re-prints the Resistance and
 * Frequency values. Includes a ~100ms delay.
 */
void refresh_OLED(void);

#endif
