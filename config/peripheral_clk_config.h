/* Auto-generated config file peripheral_clk_config.h */
#ifndef PERIPHERAL_CLK_CONFIG_H
#define PERIPHERAL_CLK_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

/**
 * \def CONF_CPU_FREQUENCY
 * \brief CPU's Clock frequency
 */
#ifndef CONF_CPU_FREQUENCY
#define CONF_CPU_FREQUENCY 4000000
#endif

#include <hpl_osc32kctrl_config.h>

// <y> SLCD Clock Source
// <id> slcd_clk_selection
// <SLCD_CLOCK_SOURCE"> SLCD source
// <i> Select the clock source for SLCD.
#ifndef CONF_GCLK_SLCD_SRC
#define CONF_GCLK_SLCD_SRC SLCD_CLOCK_SOURCE
#endif

/**
 * \def CONF_GCLK_SLCD_FREQUENCY
 * \brief SLCD's Clock frequency
 */
#ifndef CONF_GCLK_SLCD_FREQUENCY
#define CONF_GCLK_SLCD_FREQUENCY 32768
#endif

#ifndef SLCD_FRAME_FREQUENCY
#define SLCD_FRAME_FREQUENCY                                                                                           \
	(CONF_GCLK_SLCD_FREQUENCY                                                                                          \
	 / (((CONF_SLCD_PRESC + 1) * 16) * (CONF_SLCD_CKDIV + 1)                                                           \
	    * ((CONF_SLCD_COM_NUM == 4) ? 6 : ((CONF_SLCD_COM_NUM == 5) ? 8 : (CONF_SLCD_COM_NUM + 1)))))
#endif

// <<< end of configuration section >>>

#endif // PERIPHERAL_CLK_CONFIG_H
