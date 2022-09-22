#include "main.h"

/**
 * cap_string - capitalize words of a string
 * @str: to capitalized
 * Return: pointer changed string
 */

char *cap_string(char *str)
{
	int ch = 0;

	while (str[ch])
	{
		while (!(str[ch] >= 'a' && str[ch] <= 'z'))
			ch++;
		if (str[ch - 1] == ' ' ||
		    str[ch - 1] == '\t' ||
		    str[ch - 1] == '\n' ||
		    str[ch - 1] == ',' ||
		    str[ch - 1] == ';' ||
		    str[ch - 1] == '.' ||
		    str[ch - 1] == '!' ||
		    str[ch - 1] == '?' ||
		    str[ch - 1] == '"' ||
		    str[ch - 1] == '(' ||
		    str[ch - 1] == ')' ||
		    str[ch - 1] == '{' ||
		    str[ch - 1] == '}' ||
		    ch == 0)
			str[ch] -= 32;
		ch++;
	}
	return (str);
}

