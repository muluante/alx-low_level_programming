#include "main.h"
/**
 * _islower - function to check the lower char
 * Return: zero
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
