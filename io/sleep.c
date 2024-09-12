// SPDX-License-Identifier: BSD-3-Clause
#include <internal/syscall.h>
#include <stdarg.h>
#include <errno.h>
#include <time.h>
#include <unistd.h>

//source https://www.geeksforgeeks.org/c-nanosleep-function/


unsigned int sleep(unsigned int seconds)
{
	/* TODO: Implement open system call. */
    struct timespec req;
    req.sec = seconds;
    req.nsec = 0;
    struct timespec rem;
	int ret = nanosleep(&req, &rem);


	return ret;
}
