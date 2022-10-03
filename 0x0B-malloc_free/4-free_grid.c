#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - the assigned memory of the free  matrix
 * @grid: matrix
 * @height: rows.
 *
 * Return: the matrix pointer
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(*(grid + a));
	free(grid);
}
