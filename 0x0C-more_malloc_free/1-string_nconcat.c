#include "main.h"

/**
 * string_nconcat - string concatenates
 * @s1: destination
 * @s2: source
 * @n: s2 to be copied
 * Return: string concatenated]
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, ln1, ln2;
	char *pt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	if (n > ln2)
		n = ln2;
	c = ln1 + n;
	pt = malloc(sizeof(char) * c + 1);
	if (!pt)
		return (NULL);
	for (a = 0; a < ln1; a++)
		pt[a] = s1[a];
	for (b = 0; b < n; b++, a++)
		pt[a] = s2[b];
	pt[a] = 0;
	return (pt);
}

/**
 * _strlen - string length
 * @s: string s
 * Return: string length
 */
int _strlen(char *s)
{
	char *d = s;

	while (*s)
		s++;
	return (s - d);
}
