#include "function_pointers.h"

/**
 * int_index - integer searched
 * @array: array integer
 * @size: the size of array
 * @cmp: function that compare
 *
 * Return: return the index integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
