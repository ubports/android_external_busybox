/* vi: set sw=4 ts=4: */
/*
 * Utility routines.
 *
 * Copyright (C) 1999-2004 by Erik Andersen <andersen@codepoet.org>
 *
 * Licensed under GPLv2 or later, see file LICENSE in this tarball for details.
 */

#include "libbb.h"

void FAST_FUNC bb_error_msg(const char *s, ...)
{
	va_list p;

	va_start(p, s);
	bb_verror_msg(s, p, NULL);
	va_end(p);
}
