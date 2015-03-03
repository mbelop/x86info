/*
 *  Licensed under the terms of the GNU GPL License version 2.
 */

#if defined(__OpenBSD__)

#include <x86info.h>

int read_msr(int cpu, unsigned int idx, unsigned long long *val)
{
	return 0;
}

#endif /* __OpenBSD__ */
