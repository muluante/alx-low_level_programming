#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- concatenate two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int s1Size, s2Size, a;
	char *strCo;

	a = 0;
	s1Size = 0;
	s2Size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1Size))
		s1Size++;
	while (*(s2 + s2Size))
		s2Size++;
	s2Size++;

	strCo = malloc((s1Size + s2Size) * sizeof(char));
	if (strCo == NULL)
		return (NULL);

	for (a = 0; a < s1Size; a++)
		*(strCo + a) = *(s1 + a);
	for (a = s1Size; a < (s1Size + s2Size); a++)
		*(strCo + a) = *(s2 + a - s1Size);

	return (strCo);
}
