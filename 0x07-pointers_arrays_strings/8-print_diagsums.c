#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print addition of numbers.
 * @a: Multidimensional array
 * @size: Size of array
 * Return: nothing to return
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum2;

	sum = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
	}

	for (i = 0; i < size; i++)
	{
		sum2 += a[(i * size) + size - (i + 1)];
	}

	printf("%d, %d\n", sum, sum2);
}
