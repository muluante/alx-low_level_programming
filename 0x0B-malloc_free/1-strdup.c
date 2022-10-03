#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - string to be copied
* @str: string copied
* Return: string
*/

char *_strdup(char *str)
{
	int a = 0, b, c = 0;
	char *Strnew = NULL;

	while (str[c] != '\0')
	{
		a++;
		c++;
	}

	Strnew = malloc(sizeof(char) * (a + 1));

	if (str == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		Strnew[b] = str[b];
	return (Strnew);
}
