#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of an array
 * @a: pointer to array
 * @n: number element
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
	if (b != n - 1)
	{
		printf(",");
		printf(" ");
	}
	}
	printf("\n");
}
