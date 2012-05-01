/*
 * File			: type.h
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
 * 2011-06-02	Kevin		frist version.
 */
 
#ifndef __TYPE_H__
#define __TYPE_H__

typedef char				int8_t;
typedef unsigned char		uint8_t;
typedef short				int16_t;
typedef unsigned short		uint16_t;
typedef long 				int32_t;
typedef unsigned long 		uint32_t;

typedef uint32_t			size_t;
typedef uint32_t			off_t;

#define TRUE				1
#define FALSE				0	

#define	INT8_MIN			(-0x7f - 1)
#define	INT16_MIN			(-0x7fff - 1)
#define	INT32_MIN			(-0x7fffffff - 1)

#define	INT8_MAX			0x7f
#define	INT16_MAX			0x7fff
#define	INT32_MAX			0x7fffffff

#define	UINT8_MAX			0xff
#define	UINT16_MAX			0xffff
#define	UINT32_MAX			0xffffffffU

#define NULL				((void *)0)

#define isdigit(c)			((unsigned int)(c - '0') < 10u)
#define isupper(c)			((unsigned int)(c - 'A') < 26u)
#define islower(c)			((unsigned int)(c - 'a') < 26u)
#define isspace(c)			(c == 0x20)
#define toupper(c)			(islower(c) ? ( c -= ('a' - 'A')) : (c))
#define tolower(c)			(isupper(c) ? ( c += ('a' - 'A')) : (c))
	
#endif
