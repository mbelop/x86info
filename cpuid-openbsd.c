/*
 *  Licensed under the terms of the GNU GPL License version 2.
 */

#if defined(__OpenBSD__)
#include <stdio.h>
#include <x86info.h>

void bind_cpu(unsigned int cpunr __unused)
{
}

static const char *NATIVE_CPUID_FAILED_MSG = "WARNING: Native cpuid failed\n";

void cpuid(unsigned int CPU_number, unsigned long long idx,
	unsigned int *eax,
	unsigned int *ebx,
	unsigned int *ecx,
	unsigned int *edx)
{
	if (native_cpuid(CPU_number, idx, eax,ebx,ecx,edx))
		printf("%s", NATIVE_CPUID_FAILED_MSG);
}

#endif /* __OpenBSD__ */
