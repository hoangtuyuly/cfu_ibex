/*
Copyright (c) 1994 Cygnus Support.
All rights reserved.

Redistribution and use in source and binary forms are permitted
provided that the above copyright notice and this paragraph are
duplicated in all such forms and that any documentation,
and/or other materials related to such
distribution and use acknowledge that the software was developed
at Cygnus Support, Inc.  Cygnus Support, Inc. may not be used to
endorse or promote products derived from this software without
specific prior written permission.
THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*/
/*
 * asctime.c
 * Original Author:	G. Haley
 *
 * Converts the broken down time in the structure pointed to by tim_p into a
 * string of the form
 *
 * Wed Jun 15 11:38:07 1988\n\0
 *
 * Returns a pointer to the string.
 */

/*
FUNCTION
<<asctime>>---format time as string

INDEX
	asctime
INDEX
	_asctime_r

SYNOPSIS
	#include <time.h>
	char *asctime(const struct tm *<[clock]>);
	char *_asctime_r(const struct tm *<[clock]>, char *<[buf]>);

DESCRIPTION
Format the time value at <[clock]> into a string of the form
. Wed Jun 15 11:38:07 1988\n\0
The string is generated in a static buffer; each call to <<asctime>>
overwrites the string generated by previous calls.

RETURNS
A pointer to the string containing a formatted timestamp.

PORTABILITY
ANSI C requires <<asctime>>.

<<asctime>> requires no supporting OS subroutines.
*/

#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <_ansi.h>

#ifndef _REENT_ONLY

#define _ASCTIME_SIZE 26

static NEWLIB_THREAD_LOCAL char _asctime_buf[_ASCTIME_SIZE];

char *
asctime (const struct tm *tim_p)
{
  return asctime_r (tim_p, (char * __restrict) &_asctime_buf);
}

#endif
