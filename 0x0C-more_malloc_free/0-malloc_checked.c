#include "main.h"

/**
 * malloc_checked - assign memory using malloc
 * @b: number of bytes
 * Return: to returns pointer that is void
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (!pt)
		exit(98);
	return (pt);
}
