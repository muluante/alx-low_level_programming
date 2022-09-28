#include "main.h"

/**
 * isSqrt - function for _sqrt_recursion
 * @n: the input digit
 * @i: iteration
 * Return: the square root of digit
 */

int isSqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (isSqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function for natural square root of digit
 * @n: the input digit
 * Return: square root of digit
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (isSqrt(n, 1));
}
