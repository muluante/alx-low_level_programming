#include "main.h"
/**
 * rot13 - string using rot13
 * @str: to encoded
 * Return: pointer encoded string
 */

char *rot13(char *str)
{
	int ch1 = 0, ch2;

	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
	'T', 'U', 'V', 'W', 'X', 'Y',
			    'Z', 'A', 'B', 'C', 'D', 'E',
			    'F', 'G', 'H', 'I', 'J', 'K',
			    'L', 'M', 'n', 'o', 'p', 'q',
			    'r', 's', 't', 'u', 'v', 'w',
			    'x', 'y', 'z', 'a', 'b', 'c',
			    'd', 'e', 'f', 'g', 'h', 'i',
			    'j', 'k', 'l', 'm'};

	while (str[ch1])
	{
		for (ch2 = 0; ch2 < 52; ch2++)
		{
		if (str[ch1] == alphabet[ch2])
		{
		str[ch1] == rot13key[ch2];
		break;
		}
		}
	ch1++;
	}
	return (str);
}
