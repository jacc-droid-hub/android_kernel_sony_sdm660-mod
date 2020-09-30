/* Copyright (c) 2015-2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef __QPNP_HAPTIC_H
#define __QPNP_HAPTIC_H

extern void qpnp_hap_td_enable_external(int time_ms);

/* interface for the other module to play different sequences */
#ifdef CONFIG_QPNP_HAPTIC
int qpnp_hap_play_byte(u8 data, bool on);
#else
static inline int qpnp_hap_play_byte(u8 data, bool on)
{
	return 0;
}
#endif
#endif
