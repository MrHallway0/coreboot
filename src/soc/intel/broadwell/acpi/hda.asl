/* SPDX-License-Identifier: GPL-2.0-only */

/* Intel PCH HDA */

// Intel High Definition Audio (Azalia) 0:1b.0
Device (HDEF)
{
	Name (_ADR, 0x001b0000)
	Name (_PRW, Package () { 0x6d, 3 })
}

// Intel Mini-HD 0:03.0
Device (HDAU)
{
	Name (_ADR, 0x00030000)
}
