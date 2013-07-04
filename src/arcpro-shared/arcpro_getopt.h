/*
 * ArcPro MMORPG Server
 * Copyright (C) 2011 - 2013 (http://arcpro.sexyi.am/)
 * Copyright (C) 2008 - 2013 <http://www.arcemu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _arcpro_GETOPT_H
#define _arcpro_GETOPT_H

/* getopt() wrapper */
#define arcpro_no_argument            0
#define arcpro_required_argument      1
#define arcpro_optional_argument      2
struct arcpro_option
{
	const char* name;
	int has_arg;
	int* flag;
	int val;
};
extern char arcpro_optarg[514];
int arcpro_getopt_long_only(int ___argc, char* const* ___argv, const char* __shortopts, const struct arcpro_option* __longopts, int* __longind);

#endif
