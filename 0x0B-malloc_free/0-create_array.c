#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * @size: array size
 * @c: char to print
 * Return: chars of string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *pr;

	pr = malloc(sizeof(char) * size);
	if (!size || !pr)
		return (NULL);
	for (a = 0; a < size; a++)
		pr[a] = c;
	return (pr);
}
