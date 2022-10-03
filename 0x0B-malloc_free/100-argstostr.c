#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the string length
 * @s: string
 * Return: length of string to be returned
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;

	return (a);
}

/**
 * argstostr - concatenates
 * @ac: count argument
 * @av: vector argument
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int b, c, le, to;
	int d = 0;
	char *pt;

	if (!ac || !av)
		return (NULL);
	to = 0;
	for (b = 0; b < ac; b++)
	{
		le = _strlen(av[b]) + 1;
		to += le;
	}
	pt = (int *)malloc(sizeof(char) * to + 1);
	if (!pt)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
		le = _strlen(av[b]);
		for (c = 0; c < le; c++, d++)
		{
			pt[d] = av[b][c];
		}
		pt[d++] = '\n';
	}
	pt[d] = '\0';
	return (pt);
}
