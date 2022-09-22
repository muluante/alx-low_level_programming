#include "main.h"

/**
 * _strncat - concatnet strings
 * @dest: destination parameter
 * @src: source parametr
 * @n: append destination
 * Return: result string destination
 */


char *_strncat(char *dest, char *src, int n)
{
	itn a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];

	return (dest);

}
