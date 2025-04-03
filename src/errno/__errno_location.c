#include <errno.h>
#include "pthread_impl.h"

int musl_global_errno;

int *__errno_location(void)
{
	return &musl_global_errno;
}

weak_alias(__errno_location, ___errno_location);
