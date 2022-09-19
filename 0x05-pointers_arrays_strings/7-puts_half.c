#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: an input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
		a++;

	a--;

	b = a / 2;

	if (a % 2 == 1)
		b++;

	while (b < a)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
