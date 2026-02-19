/**
 * @file main.cpp
 * @brief Automatic light intensity monitoring - Arduino sketch using an LDR
 *
 * This sketch reads an analog value from an LDR (light-dependent resistor)
 * connected to the analog pin defined by LDR_PIN, converts it into a
 * percentage representing light intensity, and prints the raw and
 * percentage values to the serial console at 500 ms intervals.
 *
 * The code is intentionally small and clear for educational and prototyping
 * use. It demonstrates analogRead, basic mapping, and serial output.
 *
 * @author
 * @date 2026-02-17
 * @version 1.0
 */

#include <Arduino.h>

/**
 * @def LDR_PIN
 * @brief Analog pin to which the LDR (voltage divider) is connected.
 *
 * The LDR should be connected as part of a voltage divider so that the
 * analog input reads a voltage between 0 and Vcc. Use A0 (LDR_PIN) by default.
 */
#define LDR_PIN A0

/**
 * @brief Arduino initialization routine.
 *
 * Sets up the serial port and configures the LDR pin as an input. Prints a
 * single banner line to the serial console to indicate the sketch has started.
 *
 * @note This function is called once by the Arduino framework during startup.
 */
