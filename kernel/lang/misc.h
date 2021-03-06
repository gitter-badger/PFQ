/***************************************************************
 *
 * (C) 2011-15 Nicola Bonelli <nicola@pfq.io>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * The full GNU General Public License is included in this distribution in
 * the file called "COPYING".
 *
 ****************************************************************/

#ifndef PFQ_LANG_MISC_H
#define PFQ_LANG_MISC_H

#include <lang/module.h>

static inline ActionSkBuff
mark(arguments_t args, SkBuff b)
{
	const uint32_t value = GET_ARG(uint32_t, args);
	set_mark(b, value);
	return Pass(b);
}

static inline ActionSkBuff
put_state(arguments_t args, SkBuff b)
{
	const uint32_t value = GET_ARG(uint32_t, args);
	set_state(b, value);
	return Pass(b);
}


#endif /* PFQ_LANG_MISC_H */
