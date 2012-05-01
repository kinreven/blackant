/*
 * File			: string.h
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
 
#ifndef __STRING_H__
#define __STRING_H__

#ifdef	__tiny_os
#endif

#ifdef 	__tiny_fs
#endif

void * 	memset(void *s, int c, size_t n);
void * 	memcpy(void *dest, const void *src, size_t n);
int 	memcmp(const void *s1, const void *s2, size_t n);
char *	strcpy(char *dest, const char *src);
char *	strncpy(char *dest, const char *src, size_t count);
int 	strcmp(const char *s1, const char *s2);
int 	strncmp(const char *cs,const char *ct, size_t count);
char *	strcat(char * dest, const char * src);
char *	strncat(char *dest, const char *src, size_t count);
int		strlen(const char *s);
char *	strrchr(const char *t, int c);
char *	strchr(const char *t, int c);

#endif
