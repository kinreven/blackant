/*
 * File			: main.c
 * Description	: The main entry for test only now.
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

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char **argv)
{
	int8_t a[12] = {0x0, 0x1, 0x2, 0x3, 1, 2, 3, 4, 'a', 'b', 'c', 'd'};
	int8_t b[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
	int8_t *c = "-12345678";
	int32_t ret;
	
	memset(b, 0x0, 8);
	memcpy(b+4, a, 4);
	ret = memcmp(a, b, 8);
	strcpy(a, b);
	strncpy(a, b, 4);
	ret = strcmp(a, b);
	ret = strncmp(a, b, 4);
	memset(a, 0x0, 12);
	strcat(a, b);
	strncat(a, b, 2);
	strrchr(a, 4);
	strchr(b, 4);
	ret = atoi(c);
	
	return ret;
}
