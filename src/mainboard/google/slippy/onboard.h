/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#ifndef ONBOARD_H
#define ONBOARD_H

#define BOARD_LIGHTSENSOR_NAME		"lightsensor"
#define BOARD_LIGHTSENSOR_IRQ		35	/* PIRQT */
#define BOARD_LIGHTSENSOR_I2C_BUS	2	/* I2C1 */
#define BOARD_LIGHTSENSOR_I2C_ADDR	0x44

#define BOARD_TRACKPAD_NAME		"trackpad"
#define BOARD_TRACKPAD_IRQ		37	/* PIRQV */
#define BOARD_TRACKPAD_WAKE_GPIO	12	/* GPIO12 */
#define BOARD_TRACKPAD_I2C_BUS		1	/* I2C0 */
#define BOARD_TRACKPAD_I2C_ADDR		0x67

#define BOARD_TOUCHSCREEN_NAME		"touchscreen"
#define BOARD_TOUCHSCREEN_IRQ		38	/* PIRQW */
#define BOARD_TOUCHSCREEN_WAKE_GPIO	25	/* GPIO25 */
#define BOARD_TOUCHSCREEN_I2C_BUS	2	/* I2C1 */
#define BOARD_TOUCHSCREEN_I2C_ADDR	0x4a

#define PEPPY_BOARD_VERSION_PROTO	0
#define PEPPY_BOARD_VERSION_EVT		1

#endif
