/*
 * File			: string.c
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

#include <sys/type.h>
#include "string.h"

void * memset(void *s, int c, size_t n)
{
	void *_s = s;
	
	while (n--) {
		*((char *)s++) = c;
	}
	
	return _s;
}

void * memcpy(void *dest, const void *src, size_t n)
{
	void *_dest = dest;
	
	while (n--) {
		*((char *)dest++) = *((char *)src++);
	}
	
	return _dest;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
	char *_s1 = (char *)s1;
	char *_s2 = (char *)s2;
	int ret = 0;
	
	while ((n--) && !(ret = *((char *)_s1++) - *((char *)_s2++)))
		;
		
	return ret;
}

char *strcpy(char *dest, const char *src)
{
	char *_dest = dest;
	
	while ((*((char *)dest++) = *((char *)src++)) != '\0') 
		;
		
	return _dest;
}

char *strncpy(char *dest, const char *src, size_t count)
{
	char *_dest = dest;
	
	while (count-- && ((*((char *)dest++) = *((char *)src++)) != '\0'))
		;
		
	count++;
	
	while (count--) {
		(*((char *)dest++)) = '\0';
	}
	
	return _dest;
}

int strcmp(const char *s1, const char *s2)
{
	int ret;
	
	while ((*s1 != '\0') && !(ret = *s1++ - *s2++))
		;
	
	return ret;
}

int strncmp(const char *cs,const char *ct, size_t count)
{
	int ret = 0;

	while (count--) {
		if (((ret = *cs - *ct++) != 0) || (*cs++ == '\0'))
			break;
	}

	return ret;
}

char *strcat(char * dest, const char * src)
{
	char *_dest = dest;

	while (*dest++ != '\0')
		;
	while ((*dest++ = *src++) != '\0')
		;

	return _dest;
}

char *strncat(char *dest, const char *src, size_t count)
{
	char *_dest = dest;

	if (count) {
		while (*dest++ != '\0')
			;
		while ((*dest++ = *src++)) {
			if (--count == 0) {
				*dest = '\0';
				break;
			}
		}
	}

	return _dest;
}

int strlen(const char *s)
{
	int len;
	
	while (*s++ != '\0') {
		len++;
	}
	
	return len;
}

char *strrchr(const char *t, int c) 
{
	const char *l = NULL;

	for (;;) {
		if (*t == c) {
			l = t;
		}
		if (!*t) {
			break;
		}
		t++;
	}
	
	return (char*)l;
}

char *strchr(const char *t, int c) 
{
	const char *l = NULL;

	for (;;) {
		if (*t == c) {
			l = t;
			break;
		}
		if (!*t) {
			break;
		}
		t++;
	}
	
	return (char*)l;
}
