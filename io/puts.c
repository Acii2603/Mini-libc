// SPDX-License-Identifier: BSD-3-Clause

#include <fcntl.h>
#include <internal/syscall.h>
#include <stdarg.h>
#include <errno.h>

int puts(const char *str)
{
	/* TODO: Implement open system call. */
	int ret = write(1, str, strlen(str));

    if (write( 1, "\n", 1) < 0)
        return -1;

	return ret + 1;
}
