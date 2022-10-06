#include "main.h"

/**
 * array_range - an array of integers
 * @min: min int
 * @max: max int
 * Return: integer of an array
 */
int *array_range(int min, int max)
{
	int ln, a;
	int *pt;

	if (min > max)
		return (NULL);
	ln = max - min + 1;
	pt = malloc(sizeof(int) * ln);
	if (!pt)
		return (NULL);
	for (a = 0; a < ln; a++)
		pt[a] = min++;
	return (pt);
}
