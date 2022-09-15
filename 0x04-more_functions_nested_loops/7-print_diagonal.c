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

	if (a > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (a == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
