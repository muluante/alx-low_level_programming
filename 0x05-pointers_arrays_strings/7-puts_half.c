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

	if (a % 2 == 0)
		b = (a + 1) / 2;
	else if (a % 2 != 0)
		b = a / 2;
	for (b += 1; b <= a; b++)
		_putchar(str[b]);

	_putchar('\n');
}
