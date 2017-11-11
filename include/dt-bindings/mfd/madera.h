/*
 * Device Tree defines for Madera codecs
 *
 * Copyright 2015-2016 Cirrus Logic
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DT_BINDINGS_MFD_MADERA_H
#define _DT_BINDINGS_MFD_MADERA_H

/* GPIO Function Definitions */
#define MADERA_GP_FN_ALTERNATE		0x00
#define MADERA_GP_FN_GPIO		0x01
#define MADERA_GP_FN_DSP_GPIO		0x02
#define MADERA_GP_FN_IRQ1		0x03
#define MADERA_GP_FN_IRQ2		0x04
#define MADERA_GP_FN_FLL1_CLOCK		0x10
#define MADERA_GP_FN_FLL2_CLOCK		0x11
#define MADERA_GP_FN_FLL3_CLOCK		0x12
#define MADERA_GP_FN_FLLAO_CLOCK	0x13
#define MADERA_GP_FN_FLL1_LOCK		0x18
#define MADERA_GP_FN_FLL2_LOCK		0x19
#define MADERA_GP_FN_FLL3_LOCK		0x1A
#define MADERA_GP_FN_FLLAO_LOCK		0x1B
#define MADERA_GP_FN_OPCLK_OUT		0x40
#define MADERA_GP_FN_OPCLK_ASYNC_OUT	0x41
#define MADERA_GP_FN_PWM1		0x48
#define MADERA_GP_FN_PWM2		0x49
#define MADERA_GP_FN_SPDIF_OUT		0x4C
#define MADERA_GP_FN_HEADPHONE_DET	0x50
#define MADERA_GP_FN_MIC_DET		0x58
#define MADERA_GP_FN_DRC1_SIGNAL_DETECT	0x80
#define MADERA_GP_FN_DRC2_SIGNAL_DETECT	0x81
#define MADERA_GP_FN_ASRC1_IN1_LOCK	0x88
#define MADERA_GP_FN_ASRC1_IN2_LOCK	0x89
#define MADERA_GP_FN_ASRC2_IN1_LOCK	0x8A
#define MADERA_GP_FN_ASRC2_IN2_LOCK	0x8B
#define MADERA_GP_FN_DSP_IRQ1		0xA0
#define MADERA_GP_FN_DSP_IRQ2		0xA1
#define MADERA_GP_FN_DSP_IRQ3		0xA2
#define MADERA_GP_FN_DSP_IRQ4		0xA3
#define MADERA_GP_FN_DSP_IRQ5		0xA4
#define MADERA_GP_FN_DSP_IRQ6		0xA5
#define MADERA_GP_FN_DSP_IRQ7		0xA6
#define MADERA_GP_FN_DSP_IRQ8		0xA7
#define MADERA_GP_FN_DSP_IRQ9		0xA8
#define MADERA_GP_FN_DSP_IRQ10		0xA9
#define MADERA_GP_FN_DSP_IRQ11		0xAA
#define MADERA_GP_FN_DSP_IRQ12		0xAB
#define MADERA_GP_FN_DSP_IRQ13		0xAC
#define MADERA_GP_FN_DSP_IRQ14		0xAD
#define MADERA_GP_FN_DSP_IRQ15		0xAE
#define MADERA_GP_FN_DSP_IRQ16		0xAF
#define MADERA_GP_FN_HPOUT1L_SC		0xB0
#define MADERA_GP_FN_HPOUT1R_SC		0xB1
#define MADERA_GP_FN_HPOUT2L_SC		0xB2
#define MADERA_GP_FN_HPOUT2R_SC		0xB3
#define MADERA_GP_FN_HPOUT3L_SC		0xB4
#define MADERA_GP_FN_HPOUT4R_SC		0xB5
#define MADERA_GP_FN_SPKOUTL_SC		0xB6
#define MADERA_GP_FN_SPKOUTR_SC		0xB7
#define MADERA_GP_FN_HPOUT1L_ENA	0xC0
#define MADERA_GP_FN_HPOUT1R_ENA	0xC1
#define MADERA_GP_FN_HPOUT2L_ENA	0xC2
#define MADERA_GP_FN_HPOUT2R_ENA	0xC3
#define MADERA_GP_FN_HPOUT3L_ENA	0xC4
#define MADERA_GP_FN_HPOUT4R_ENA	0xC5
#define MADERA_GP_FN_SPKOUTL_ENA	0xC6
#define MADERA_GP_FN_SPKOUTR_ENA	0xC7
#define MADERA_GP_FN_HPOUT1L_DIS	0xD0
#define MADERA_GP_FN_HPOUT1R_DIS	0xD1
#define MADERA_GP_FN_HPOUT2L_DIS	0xD2
#define MADERA_GP_FN_HPOUT2R_DIS	0xD3
#define MADERA_GP_FN_HPOUT3L_DIS	0xD4
#define MADERA_GP_FN_HPOUT4R_DIS	0xD5
#define MADERA_GP_FN_SPKOUTL_DIS	0xD6
#define MADERA_GP_FN_SPKOUTR_DIS	0xD7
#define MADERA_GP_FN_SPK_SHUTDOWN	0xE0
#define MADERA_GP_FN_SPK_OVH_SHUTDOWN	0xE1
#define MADERA_GP_FN_SPK_OVH_WARN	0xE2
#define MADERA_GP_FN_TIMER1_STATUS	0x140
#define MADERA_GP_FN_TIMER2_STATUS	0x141
#define MADERA_GP_FN_TIMER3_STATUS	0x142
#define MADERA_GP_FN_TIMER4_STATUS	0x143
#define MADERA_GP_FN_TIMER5_STATUS	0x144
#define MADERA_GP_FN_TIMER6_STATUS	0x145
#define MADERA_GP_FN_TIMER7_STATUS	0x146
#define MADERA_GP_FN_TIMER8_STATUS	0x147
#define MADERA_GP_FN_EVENTLOG1_FIFO_STS	0x150
#define MADERA_GP_FN_EVENTLOG2_FIFO_STS	0x151
#define MADERA_GP_FN_EVENTLOG3_FIFO_STS	0x152
#define MADERA_GP_FN_EVENTLOG4_FIFO_STS	0x153
#define MADERA_GP_FN_EVENTLOG5_FIFO_STS	0x154
#define MADERA_GP_FN_EVENTLOG6_FIFO_STS	0x155
#define MADERA_GP_FN_EVENTLOG7_FIFO_STS	0x156
#define MADERA_GP_FN_EVENTLOG8_FIFO_STS	0x157

/* GPIOn_CTRL_1 Configuration Bits */
#define MADERA_GPN_LVL		0x8000
#define MADERA_GPN_OP_CFG_MASK	0x4000
#define MADERA_GPN_DB_MASK	0x2000
#define MADERA_GPN_POL_MASK	0x0800

/* GPIOn_CTRL_2 Configuration Bits */
#define MADERA_GPN_DIR_MASK	0x8000
#define MADERA_GPN_PU_MASK	0x4000
#define MADERA_GPN_PD_MASK	0x2000

/* Provide some defines for the most common GPIO configs */
#define MADERA_GP_DEFAULT	0xffffffff
#define MADERA_GP_BUSKEEP	(MADERA_GPN_PU_MASK | MADERA_GPN_PD_MASK)
#define MADERA_GP_OUTPUT	MADERA_GP_FN_GPIO
#define MADERA_GP_INPUT		(MADERA_GP_FN_GPIO | MADERA_GPN_DIR)


#define MADERA_32KZ_MCLK1	1
#define MADERA_32KZ_MCLK2	2
#define MADERA_32KZ_SYSCLK	3

#endif
