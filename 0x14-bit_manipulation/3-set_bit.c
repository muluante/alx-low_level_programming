#include "main.h"
/**
 * set_bit - sets the value of a bit
 * @n: a string of 0 and 1 chars
 * @index: index of the bit
 *
 * Return: 1 if it worked or -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | 1 << index;
		return (1);
	}
}
