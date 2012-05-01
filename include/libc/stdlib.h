/*
 * File			: stdlib.h
 * Description	: This file is a part of lite C library.
 * Author		: Kevin Ren <kinreven@gmail.com>
 *
 * Copyright (c) 2011, Kevin Ren <kinreven@gmai.com>
 *
 * Licensed under the Academic Free License version 2.1
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
 */
 
/*
 * Change Logs:
 * Date			Author		Notes
 * ================================================================
 * 2011-06-08	Kevin		frist version.
 */
 
#ifndef __STDLIB_H__
#define __STDLIB_H__

#ifdef	__tiny_os
#endif

#ifdef 	__tiny_fs
#endif

int 	rand(void);
int 	srand(unsigned int seed);
int 	atoi(const char *nptr);
char * 	itoa(int value, char *str, int radix);

#endif
