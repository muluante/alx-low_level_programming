#include "main.h"

/**
 * swap_int - swaping two integers
 * @a: parameter one
 * @b: parameter two
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
