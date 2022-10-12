#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter
 * @array: array input
 * @size: loop through element
 * @action: action to be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (action && array)
		while (size--)
			action(*(array++));

}
