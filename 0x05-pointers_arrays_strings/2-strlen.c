#include "main.h"

/**
 * _strlen - function that return the length of string
 * @s: the input
 * Return: string length
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length += 1;
		*s = *s + 1;
	}

		return (length);
}
