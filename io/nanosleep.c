// SPDX-License-Identifier: BSD-3-Clause

#include <internal/syscall.h>
#include <stdarg.h>
#include <errno.h>
#include <time.h>

int nanosleep(const struct timespec *t1, struct timespec *t2)
{
	/* TODO: Implement open system call. */
	int ret = syscall(__NR_nanosleep, t1, t2);

	if (ret < 0) {
		errno = -ret;

		return -1;
	}

	return ret;
}


