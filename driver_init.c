/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>

struct slcd_sync_descriptor SEGMENT_LCD_0;

void SEGMENT_LCD_0_PORT_init(void)
{

	gpio_set_pin_function(PB06, PINMUX_PB06B_SLCD_LP0);

	gpio_set_pin_function(PB07, PINMUX_PB07B_SLCD_LP1);

	gpio_set_pin_function(PB08, PINMUX_PB08B_SLCD_LP2);

	gpio_set_pin_function(PB09, PINMUX_PB09B_SLCD_LP3);

	gpio_set_pin_function(PA04, PINMUX_PA04B_SLCD_LP4);

	gpio_set_pin_function(PA05, PINMUX_PA05B_SLCD_LP5);

	gpio_set_pin_function(PA06, PINMUX_PA06B_SLCD_LP6);

	gpio_set_pin_function(PA07, PINMUX_PA07B_SLCD_LP7);

	gpio_set_pin_function(PA08, PINMUX_PA08B_SLCD_LP11);

	gpio_set_pin_function(PA09, PINMUX_PA09B_SLCD_LP12);

	gpio_set_pin_function(PA10, PINMUX_PA10B_SLCD_LP13);

	gpio_set_pin_function(PA11, PINMUX_PA11B_SLCD_LP14);

	gpio_set_pin_function(PB11, PINMUX_PB11B_SLCD_LP21);

	gpio_set_pin_function(PB12, PINMUX_PB12B_SLCD_LP22);

	gpio_set_pin_function(PB13, PINMUX_PB13B_SLCD_LP23);
}
/**
 * \brief SLCD initialization function
 *
 * Enables SLCD peripheral, clocks and initializes SLCD driver
 */
void SEGMENT_LCD_0_init(void)
{
	hri_mclk_set_APBCMASK_SLCD_bit(SLCD);
	slcd_sync_init(&SEGMENT_LCD_0, SLCD);
	SEGMENT_LCD_0_PORT_init();
}

void system_init(void)
{
	init_mcu();

	SEGMENT_LCD_0_init();
}
