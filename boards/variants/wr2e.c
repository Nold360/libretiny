/* This file was auto-generated from wr2e.json using boardgen */

#include <Arduino.h>

#ifdef LT_VARIANT_INCLUDE
#include LT_VARIANT_INCLUDE
#endif

// clang-format off
PinInfo lt_arduino_pin_info_list[PINS_COUNT] = {
	// D0: PA12, PWM3
	{PA_12, PIN_GPIO | PIN_IRQ | PIN_PWM,                                          PIN_NONE, 0},
	// D1: PA19, ADC1, UART0_CTS, SPI0_CS, SPI1_CS, I2C0_SDA, SD_D3, TMR5_TRIG, I2S0_TX
	{PA_19, PIN_GPIO | PIN_IRQ | PIN_ADC | PIN_I2C | PIN_I2S | PIN_SPI | PIN_UART, PIN_NONE, 0},
	// D2: PA05, PWM4, WAKE1
	{PA_5,  PIN_GPIO | PIN_IRQ | PIN_PWM,                                          PIN_NONE, 0},
	// D3: PA18, UART0_RX, SPI0_SCK, SPI1_SCK, I2C1_SCL, SD_D2, TMR4_TRIG, I2S0_MCK, WAKE0
	{PA_18, PIN_GPIO | PIN_IRQ | PIN_I2C | PIN_I2S | PIN_SPI | PIN_UART,           PIN_NONE, 0},
	// D4: PA23, UART0_TX, SPI0_MOSI, SPI1_MOSI, I2C1_SDA, SD_D1, PWM0, WAKE3
	{PA_23, PIN_GPIO | PIN_IRQ | PIN_PWM | PIN_I2C | PIN_SPI | PIN_UART,           PIN_NONE, 0},
	// D5: PA14, PWM0, SWCLK
	{PA_14, PIN_GPIO | PIN_IRQ | PIN_PWM | PIN_SWD,                                PIN_NONE, 0},
	// D6: PA15, PWM1, SWDIO
	{PA_15, PIN_GPIO | PIN_IRQ | PIN_PWM | PIN_SWD,                                PIN_NONE, 0},
	// A1: ADC2
	{AD_2,  PIN_ADC,                                                               PIN_NONE, 0},
};

PinInfo *lt_arduino_pin_gpio_map[] = {
	[5]  = &(lt_arduino_pin_info_list[2]), // PA_5 (D2)
	[12] = &(lt_arduino_pin_info_list[0]), // PA_12 (D0)
	[14] = &(lt_arduino_pin_info_list[5]), // PA_14 (D5)
	[15] = &(lt_arduino_pin_info_list[6]), // PA_15 (D6)
	[18] = &(lt_arduino_pin_info_list[3]), // PA_18 (D3)
	[19] = &(lt_arduino_pin_info_list[1]), // PA_19 (D1)
	[23] = &(lt_arduino_pin_info_list[4]), // PA_23 (D4)
	[41] = &(lt_arduino_pin_info_list[7]), // AD_2 (A1)
};
// clang-format on
