#include "main.h"

/**
 * _memset - prints memory constant
 * @s: The source array
 * @b: What the array constant for filled
 * @n: length of
 * Return: New strings to return
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
