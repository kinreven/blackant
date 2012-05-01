/*
 * File			: stdlib.c
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
 * 2011-06-09	Kevin		fix atoi error.
 */

#include "sys/type.h"
#include "stdlib.h"

static unsigned int seed = 1;

#define	M	((1U<<31) -1)
#define	A	48271
#define	Q	44488	/* M/A */
#define	R	3399    /* M%A */

int rand_r(unsigned int* seed)
{   
	int32_t X;
	
	/* the rand algorithm copy from the libc of rt-thread */
    X = *seed;
    X = A*(X%Q) - R * (int32_t) (X/Q);
    if (X < 0) {
		X += M;
	}

    return *seed = X;
}

int rand(void)
{
	return rand_r(&seed);
}

int srand(unsigned int seed)
{
	return rand_r(&seed);
}

int atoi(const char *nptr)
{
	int32_t val = 0;
	int32_t sign = 0;
	
	if (*nptr == '-') {
		sign = 1;
		nptr++;
	}
	else if (*nptr == '+') {
		sign = 0;
		nptr++;
	}
	
	while (*nptr != '\0') {
		if (!isdigit(*nptr)) {
			return 0;
		}
		val = (10*val + (*nptr - '0'));
		nptr++;
	}
	
	return sign ? -val : val;
}

char * itoa(int value, char *str, int radix)
{
	/*to be done*/
	return str;
}
