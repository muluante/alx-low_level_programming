#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints in a diagonal
 * @n: parameter
 * Return: return nothing
 */

void print_diagonal(int n)
{
	int a, b;

	if (a <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			for (a = 0; b < a; b++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
}
