#include "main.h"

/**
 * string_toupper - function changev to uppercase
 * @str: string to be converted
 * Return: converted string
 */

char *string_toupper(char *str)
{
	int ch = 0;

	while (str[ch])
	{
		if (str[ch] >= 'a' && str[ch] <= 'z')
			str[ch] -= 32;
	ch++;
	}

	return (str);
}
