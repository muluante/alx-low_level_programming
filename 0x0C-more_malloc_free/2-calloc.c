#include "main.h"

/**
 * _calloc - assign memory to an array
 * @nmemb: elements of pointer
 * @size: size of element
 * Return: assigned memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;

	if (!nmemb || !size)
		return (NULL);
	pt = malloc(size * nmemb);
	if (!pt)
		return (NULL);
	_memset(pt, 0, size * nmemb);
	return (pt);
}

/**
 * _memset - memory with a constant
 * @s: marea of memory
 * @b: constant
 * @n: the memory area
 * Return: the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pt = s;

	while (n--)
		*s++ = b;
	return (pt);
}
