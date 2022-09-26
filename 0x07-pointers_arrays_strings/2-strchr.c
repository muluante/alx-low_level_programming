#include "main.h"

/**
 * _strchr - string character
 * @s: array to be searched
 * @c: character being searched
 * Return: nothing to return
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
