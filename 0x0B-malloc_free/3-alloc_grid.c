#include <stdlib.h>
#include "holberton.h"

/**
 * **alloc_grid - Grid.
 * @width: lol.
 * @height: lol
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y, z;

	if (width <= 0 || height <= 0)
    {
		return (NULL);
    }

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
    {
		return (NULL);
    }

	for (x = 0; x < height; x++)
	{
		grid[x] =  malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			for (z = 0; z < x; z++)
            {
				free(grid[z]);
            }
            
			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
    {
		for (y = 0; y < width; y++)
		{	
            grid[x][y] = 0;
        }
    }

	return (grid);
}