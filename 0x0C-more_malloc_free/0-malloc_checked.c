#include "main.h"

/**
 * *malloc_checked - allocated memory using mallloc and exit if failed
 * @b: int
 * Retrun: pointer to array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}

