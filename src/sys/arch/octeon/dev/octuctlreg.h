/*	$OpenBSD: octuctlreg.h,v 1.1 2016/03/18 05:38:10 jmatthew Exp $ */

/*
 * Copyright (c) 2015 Jonathan Matthew  <jmatthew@openbsd.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _OCTUCTLREG_H_
#define _OCTUCTLREG_H_

/*
 * UCTL - octeon II usb controller interface
 */

#define UCTL_CLK_TARGET_FREQ			130000000ull

#define UCTL_CLK_RST_CTL			0x00
#define UCTL_CLK_RST_CTL_HRST			(1 << 0)
#define UCTL_CLK_RST_CTL_P_PRST		(1 << 1)
#define UCTL_CLK_RST_CTL_P_POR			(1 << 2)
#define UCTL_CLK_RST_CTL_P_COM_ON		(1 << 3)
#define UCTL_CLK_RST_CTL_P_REFCLK_DIV_SHIFT	5
#define UCTL_CLK_RST_CTL_P_REFCLK_SEL_SHIFT	7
#define UCTL_CLK_RST_CTL_H_DIV_SHIFT		9
#define UCTL_CLK_RST_CTL_O_CLKDIV_EN		(1 << 13)
#define UCTL_CLK_RST_CTL_H_CLKDIV_EN		(1 << 14)
#define UCTL_CLK_RST_CTL_H_CLKDIV_RST		(1 << 15)
#define UCTL_CLK_RST_CTL_H_CLKDIV_BYP		(1 << 16)
#define UCTL_CLK_RST_CTL_O_CLKDIV_RST		(1 << 17)
#define UCTL_CLK_RST_CTL_APP_START_CLK		(1 << 18)
#define UCTL_CLK_RST_CTL_OHCI_SUSP_LGCY	(1 << 19)
#define UCTL_CLK_RST_CTL_OHCI_SM		(1 << 20)
#define UCTL_CLK_RST_CTL_OHCI_CLKCKTRST	(1 << 21)
#define UCTL_CLK_RST_CTL_EHCI_SM		(1 << 22)

#define UCTL_UPHY_STATUS			0x08

#define UCTL_UPHY_PORTX_STATUS			0x10
#define UCTL_UPHY_PORTX_STATUS_TXVREF_SHIFT	28
#define UCTL_UPHY_PORTX_STATUS_TXRISETUNE	(1 << 27)
#define UCTL_UPHY_PORTX_STATUS_TXPREEMPHTUNE	(1 << 26)

#define UCTL_IF_ENA				0x30
#define UCTL_IF_ENA_EN				(1 << 0)

#define UCTL_EHCI_CTL				0x80
#define UCTL_EHCI_CTL_L2C_ADDR_MSB_MASK	0xff
#define UCTL_EHCI_CTL_L2C_ADDR_MSB_SHIFT	0
#define UCTL_EHCI_CTL_EHCI_64B_ADDR_EN		(1 << 8)
#define UCTL_EHCI_CTL_L2C_DESC_EMOD_SHIFT	10
#define UCTL_EHCI_CTL_L2C_BUFF_EMOD_SHIFT	12

#define UCTL_OHCI_CTL				0x88
#define UCTL_OHCI_CTL_L2C_ADDR_MSB_MASK	0xff
#define UCTL_OHCI_CTL_L2C_ADDR_MSB_SHIFT	0
#define UCTL_OHCI_CTL_L2C_DESC_EMOD_SHIFT	10
#define UCTL_OHCI_CTL_L2C_BUFF_EMOD_SHIFT	12

#endif /* _OCTUCTLREG_H_ */
