#include "main.h"

/**
 * _pow_recursion - returns the power
 * @x: number to be squared
 * @y: power to be squared
 * Return: power of square
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
