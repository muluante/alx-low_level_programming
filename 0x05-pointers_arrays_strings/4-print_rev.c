#include "main.h"

/**
 * print_rev - function prints a reverse string
 * @s: input string
 * Return: zero
 */

void print_rev(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
		a++;

		for (a -= 1; a >= 0; a--)
		{
			_putchar(s[a]);
		}
		_putchar('\n');
}
