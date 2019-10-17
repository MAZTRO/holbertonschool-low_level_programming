#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - function that  concatenates two strings.
 * @grid: The first string.
 * @height: the seond int
 * Return: dest
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[i]);
		x++;
	}

	free(grid);
}
