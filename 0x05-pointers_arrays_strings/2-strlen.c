#include "main.h"

/**
 * _strlen - function that return the length of string
 * @s: the input
 * Return: string length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
