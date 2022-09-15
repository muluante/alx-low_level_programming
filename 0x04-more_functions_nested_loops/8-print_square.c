#include <stdio.h>
#include "main.h"

/**
 * print_square - print square
 * @size: parameter
 * Return: return nothing
 */

void print_square(int size)
{
	int num1, num2;

	if (size > 0)
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = 0; num2 < (size - 1); num2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');

		}
	}
	else
	{
		putchar('\n');
	}
}
