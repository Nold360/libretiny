/* This file was auto-generated from lsc-lma35.json using boardgen */

#pragma once

// clang-format off

// Pins
// ----
#define PINS_COUNT         15 // Total GPIO count
#define NUM_DIGITAL_PINS   15 // Digital inputs/outputs
#define NUM_ANALOG_INPUTS  1  // ADC inputs
#define NUM_ANALOG_OUTPUTS 6  // PWM & DAC outputs
#define PINS_GPIO_MAX      26 // Last usable GPIO number

// Wire Interfaces
// ---------------
#define PIN_WIRE2_SCL 0u // GPIO0
#define PIN_WIRE2_SDA 1u // GPIO1

// Serial ports
// ------------
#define PIN_SERIAL1_RX 10u // GPIO10
#define PIN_SERIAL1_TX 11u // GPIO11
#define PIN_SERIAL2_RX 1u  // GPIO1
#define PIN_SERIAL2_TX 0u  // GPIO0

// Pin function macros
// -------------------
#define PIN_ADC3 23u // GPIO23
#define PIN_MOSI 16u // GPIO16
#define PIN_P0   0u  // GPIO0
#define PIN_P1   1u  // GPIO1
#define PIN_P6   6u  // GPIO6
#define PIN_P7   7u  // GPIO7
#define PIN_P8   8u  // GPIO8
#define PIN_P9   9u  // GPIO9
#define PIN_P10  10u // GPIO10
#define PIN_P11  11u // GPIO11
#define PIN_P14  14u // GPIO14
#define PIN_P16  16u // GPIO16
#define PIN_P21  21u // GPIO21
#define PIN_P22  22u // GPIO22
#define PIN_P23  23u // GPIO23
#define PIN_P24  24u // GPIO24
#define PIN_P26  26u // GPIO26
#define PIN_PWM0 6u  // GPIO6
#define PIN_PWM1 7u  // GPIO7
#define PIN_PWM2 8u  // GPIO8
#define PIN_PWM3 9u  // GPIO9
#define PIN_PWM4 24u // GPIO24
#define PIN_PWM5 26u // GPIO26
#define PIN_RX1  10u // GPIO10
#define PIN_RX2  1u  // GPIO1
#define PIN_SCK  14u // GPIO14
#define PIN_SCL2 0u  // GPIO0
#define PIN_SDA1 21u // GPIO21
#define PIN_SDA2 1u  // GPIO1
#define PIN_TX1  11u // GPIO11
#define PIN_TX2  0u  // GPIO0

// Port availability
// -----------------
#define HAS_SERIAL1             1
#define HAS_SERIAL2             1
#define HAS_WIRE2               1
#define SERIAL_INTERFACES_COUNT 2
#define WIRE_INTERFACES_COUNT   1

// Arduino pin names
// -----------------
#define PIN_D0  26u // GPIO26
#define PIN_D1  14u // GPIO14
#define PIN_D2  16u // GPIO16
#define PIN_D3  24u // GPIO24
#define PIN_D4  22u // GPIO22
#define PIN_D5  0u  // GPIO0
#define PIN_D6  23u // GPIO23
#define PIN_D7  8u  // GPIO8
#define PIN_D8  9u  // GPIO9
#define PIN_D9  21u // GPIO21
#define PIN_D10 6u  // GPIO6
#define PIN_D11 7u  // GPIO7
#define PIN_D12 10u // GPIO10
#define PIN_D13 11u // GPIO11
#define PIN_D14 1u  // GPIO1
#define PIN_A0  23u // GPIO23

// Static pin names
// ----------------
static const unsigned char A0 = PIN_A0;
static const unsigned char D0 = PIN_D0;
static const unsigned char D1 = PIN_D1;
static const unsigned char D2 = PIN_D2;
static const unsigned char D3 = PIN_D3;
static const unsigned char D4 = PIN_D4;
static const unsigned char D5 = PIN_D5;
static const unsigned char D6 = PIN_D6;
static const unsigned char D7 = PIN_D7;
static const unsigned char D8 = PIN_D8;
static const unsigned char D9 = PIN_D9;
static const unsigned char D10 = PIN_D10;
static const unsigned char D11 = PIN_D11;
static const unsigned char D12 = PIN_D12;
static const unsigned char D13 = PIN_D13;
static const unsigned char D14 = PIN_D14;
