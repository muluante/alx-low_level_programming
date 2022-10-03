#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- copy a string.
 * @str: string to be copied.
 *
 *
 * Return: pointer to the copied string.
 */
char *_strdup(char *str)
{
	int sizeStr, a;
	char *strCp;

	sizeStr = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + sizeStr))
		sizeStr++;
	sizeStr++;
	strCpt = malloc((sizeStr) * sizeof(char));
	if (strCp == NULL)
		return (0);
	for (a = 0; a < (sizeStr); a++)
		*(strCp + a) = *(str + a);
	return (strCp);
}
