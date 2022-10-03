#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Initializes a matrix
 * @width: columns.
 * @height:rows.
 * Return: the matrix pointer.
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **mat;

	if (width <= 0 || height <= 0)
		return (NULL);

	mat = (int **) malloc(height * sizeof(int *));
	if (mat == NULL)
	{
		free(mat);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		*(mat + a) = (int *) malloc(width * sizeof(int));
		if (*(mat + a) == NULL)
		{
			for (b = 0; b < a; b++)
				free(*(mat + b));
			free(mat);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			*(*(mat + a) + b) = 0;

	return (mat);
}
