#include "main.h"

/**
 * reverse_array - change the content of array
 * @a: integer to be resversed
 * @b: element in the array
 * Return: reversed contenet
 */

void reverse_array(int *a, int n)
{
	int b, c;

	for (c = n - 1; c >= n / 2; a--)
	{
		b = a[n - 1 - b];
		a[n - 1 - c]= a[c];
		a[c] = a;
	}
}
