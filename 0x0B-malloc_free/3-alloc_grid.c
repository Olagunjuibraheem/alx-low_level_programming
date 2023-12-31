#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **array_grid, r, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_grid = malloc(sizeof(int *) * height);
	if (array_grid == NULL)
		return (NULL);

	r = 0;
	while (r < height)
	{
		array_grid[r] = malloc(sizeof(int) * width);
		if (array_grid[r] == NULL)
		{
			while (r >= 0)
			{
				free(array_grid[r]);
				r--;
			}
			free(array_grid);
			return (NULL);
		}


		c = 0;
		while (c < width)
		{
			array_grid[r][c] = 0;
			c++;
		}
		r++;
	}
	return (array_grid);
}
