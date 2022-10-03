#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * countWords - counts the words in the string
 * @str: source of string
 * Return: the number of words returned.
 */
int countWords(char *str)
{
	int wo;

	wo = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) == ' ' || *(str + 1) == '\0')
				wo++;
			str++;
		}
		else
			str++;
	}
	return (wo);
}
/**
 * countChars - counts the numbers in a string
 * @str: source of string
 * Return: the number of words return.
 */
int countChars(char *str)
{
	int ch;

	ch = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) != ' ' || *(str + 1) != '\0')
				ch++;
			str++;
		}
		else
			break;
	}
	return (ch);
}
/**
 * strtow - remove the character to string
 * @str: source of string
 * Return: the new array of the pointer
 */
char **strtow(char *str)
{
	int woNu, chNu, a, b;
	char **wor;

	a = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	woNu = countWords(str);
	if (woNu == 0)
		return (NULL);
	wor = (char **) malloc((woNu + 1) * sizeof(char *));
	if (wor == NULL)
	{
		free(wor);
		return (NULL);
	}
	while (a < woNu)
	{
		if (*str == ' ')
			str++;
		else
		{
			chNu = countChars(str);
			*(wor + a) = (char *) malloc((chNu + 1) * sizeof(char));
			if (*(wor + a) == NULL)
			{
				for (b = 0; b < a; b++)
					free(*(wor + b));
				free(wor);
				return (NULL);
			}
			for (b = 0; b < chNu; b++)
			{
				*(*(wor + a) + b) = *str;
				str++; }
			*(*(wor + a) + b) = '\0';
			a++;
		}
	}
	*(wor + woNu) = NULL;
	return (wor);
}
