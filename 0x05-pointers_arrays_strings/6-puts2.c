#include "main.h"

/**
 * puts2 - prints character in string
 * @str: pointer to string
 * Return: nothing
 */

void puts2(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
