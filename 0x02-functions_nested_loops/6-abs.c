#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value
 * @c: is the int
 * Return:zero
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}

