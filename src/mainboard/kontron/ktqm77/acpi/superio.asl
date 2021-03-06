/* SPDX-License-Identifier: GPL-2.0-only */

#undef SUPERIO_DEV
#undef SUPERIO_PNP_BASE
#undef W83627DHG_SHOW_UARTA
#undef W83627DHG_SHOW_UARTB
#undef W83627DHG_SHOW_KBC
#undef W83627DHG_SHOW_PS2M
#undef W83627DHG_SHOW_HWMON
#define SUPERIO_DEV		SIO0
#define SUPERIO_PNP_BASE	0x2e
#define W83627DHG_SHOW_UARTA	1
#define W83627DHG_SHOW_UARTB	1
#include <superio/winbond/w83627dhg/acpi/superio.asl>
