#include "main.h"

/**
 * leet - string to 1337
 * @str: string to be encoded
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
	int a = 0, b;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[a])
	{
		for (b = 0; b <= 7; b++)
		{
			if (str[a] == leet[b] || str[a] - 32 == leet[b])
				str[a] = b + '0';
		}
		 a++;
	}

	return (str);
}
