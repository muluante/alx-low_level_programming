#include "main.h"

/**
 * _strcmp - pointer comparing
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: display the unmatch character
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
