/*	$NetBSD$	*/

/*-
 * Copyright (c) 2019 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by 
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <sys/cdefs.h>
#include <sys/param.h>
#include <sys/ptrace.h>
#include <sys/sysctl.h>
#include <sys/wait.h>

#include <err.h>
#include <errno.h>
#include <inttypes.h>
#include <libgen.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <threads.h>
#include <unistd.h>

#include "xstringlist.h"
#include "xutils.h"


int
xthrd_create(thrd_t *thr, thrd_start_t func, void *arg)
{

	switch (thrd_create(thr, func, arg)) {
	case thrd_success:
		return thrd_success;
	case thrd_nomem:
		errx(EXIT_FAILURE, "thrd_create returned NOMEM");
	case thrd_error:
	default:
		errx(EXIT_FAILURE, "thrd_create returned error");
	}
}

int
xthrd_detach(thrd_t thr)
{

	switch (thrd_detach(thr)) {
	case thrd_success:
		return thrd_success;
	case thrd_error:
	default:
		errx(EXIT_FAILURE, "thrd_detach returned error");
	}
}

int
xmtx_init(mtx_t *mtx, int type)
{

	switch (mtx_init(mtx, type)) {
	case thrd_success:
		return thrd_success;
	case thrd_error:
	default:
		errx(EXIT_FAILURE, "mtx_init returned error");
	}
}

int
xmtx_lock(mtx_t *mtx)
{

	switch (mtx_lock(mtx)) {
	case thrd_success:
		return thrd_success;
	case thrd_error:
	default:
		errx(EXIT_FAILURE, "mtx_lock returned error");
	}
}

int
xmtx_unlock(mtx_t *mtx)
{

	switch (mtx_unlock(mtx)) {
	case thrd_success:
		return thrd_success;
	case thrd_error:
	default:
		errx(EXIT_FAILURE, "mtx_unlock returned error");
	}
}

int
xcnd_init(cnd_t *cond)
{

	switch (cnd_init(cond)) {
	case thrd_success:
		return thrd_success;
	case thrd_error:
	default:
		errx(EXIT_FAILURE, "cnd_init returned error");
	}
}

int
xcnd_signal(cnd_t *cond)
{

	switch (cnd_signal(cond)) {
	case thrd_success:
		return thrd_success;
	case thrd_error:
	default:
		errx(EXIT_FAILURE, "cnd_signal returned error");
	}
}

int
xcnd_wait(cnd_t *cond, mtx_t *mtx)
{

	switch (cnd_wait(cond, mtx)) {
	case thrd_success:
		return thrd_success;
	case thrd_error:
	default:
		errx(EXIT_FAILURE, "cnd_init returned error");
	}
}

pid_t
xwaitpid(pid_t pid, int *status, int options)
{
	pid_t wpid;

	wpid = waitpid(pid, status, options);

	if (wpid == -1)
		err(EXIT_FAILURE, "waitpid");

	if (pid != wpid)
		errx(EXIT_FAILURE, "waitpid(%d) returned %d", pid, wpid);

	return wpid;
}

int
xptrace(int request, pid_t pid, void *addr, int data)
{
	int rv;

	errno = 0;
	if ((rv = ptrace(request, pid, addr, data)) == -1 && errno != 0)
		err(EXIT_FAILURE, "ptrace");

	return rv;
}

pid_t
xfork(void)
{
	pid_t pid;

	pid = fork();
 
	if (pid == -1)
		err(EXIT_FAILURE, "waitpid");

	return pid;
}

int
xsysctl(const int *name, u_int namelen, void *oldp, size_t *oldlenp,
        const void *newp, size_t newlen)
{
	int rv;

	if ((rv = sysctl(name, namelen, oldp, oldlenp, newp, newlen)) == -1)
		err(EXIT_FAILURE, "sysctl");

	return rv;
}

int
xsnprintf(char * __restrict ret, size_t size,
          const char * __restrict format, ...)
{
	int rv;
	va_list ap;
	va_start(ap, format); 
	if ((rv = vsnprintf(ret, size, format, ap)) == -1)
		errx(EXIT_FAILURE, "Cannot format string");
	va_end(ap);
	return rv;
}

int
xtimespec_get(struct timespec *ts, int base)
{

	if (timespec_get(ts, base) == 0)
		errx(EXIT_FAILURE, "timespec_get");

	return base;
}

/* xstringlist */

char *
xsl_concat(StringList *sl)
{
	char *s;

	s = sl_concat(sl);
	if (s == NULL)
		err(EXIT_FAILURE, "sl_concat");

	return s;
}

StringList *
xsl_initf(const char * restrict format, ...)
{
	StringList *sl;
	va_list ap;

	va_start(ap, format);
	sl = xsl_vinitf(format, ap);
	va_end(ap);

	return sl;
}

StringList *
xsl_vinitf(const char * restrict format, va_list ap)
{
	StringList *sl;

	sl = sl_vinitf(format, ap);

	if (sl == NULL)
		err(EXIT_FAILURE, "sl_initf");

	return sl;
}

int
xsl_addf(StringList *sl, const char * restrict format, ...)
{
	int rv;
	va_list ap;

	va_start(ap, format);
	rv = xsl_vaddf(sl, format, ap);
	va_end(ap);

	return rv;
}

int
xsl_vaddf(StringList *sl, const char * restrict format, va_list ap)
{
	int rv;

	rv = sl_vaddf(sl, format, ap);

	if (rv == -1)
		err(EXIT_FAILURE, "sl_addf");

	return rv;
}

size_t
xsl_fwrite(StringList * restrict sl, FILE * restrict fp)
{
	size_t sz;

	sz = sl_fwrite(sl, fp);
	if (sz == (size_t)-1)
		err(EXIT_FAILURE, "sl_fwrite");

	return sz;
}

size_t
xsl_fdump(StringList * restrict sl, FILE * restrict fp)
{
	size_t sz;

	sz = sl_fdump(sl, fp);
	if (sz == (size_t)-1)
		err(EXIT_FAILURE, "sl_fwrite");

	return sz;
}
