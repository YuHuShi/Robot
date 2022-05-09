/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_examples.h"
#include "driver_init.h"
#include "utils.h"

#define SLCD_EXAMPLE_SEGID SLCD_SEGID(1, 0)
/**
 * Example of using SEGMENT_LCD_0
 */
void SEGMENT_LCD_0_example(void)
{
	slcd_sync_enable(&SEGMENT_LCD_0);
	slcd_sync_seg_on(&SEGMENT_LCD_0, SLCD_EXAMPLE_SEGID);
}
