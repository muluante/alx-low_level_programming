#include "main.h"

/**
 * _strcpy - copy variable
 * @dest: destination
 * @src: source
 * Return: return copy
 */

char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != 0)
		a++;

	for (b = 0; b <= a; b++)
		dest[b] = src[b];

	return (dest);
}
