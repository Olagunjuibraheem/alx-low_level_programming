#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: columns of array
 * @height: rows of the array
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr_ijarr;
	int r, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr_ijarr = malloc(sizeof(int *) * height);
	if (ptr_ijarr == NULL)
		return (NULL);
	r = 0;
	while (r < height)
	{
		ptr_ijarr[r] = malloc(sizeof(int) * width);
		if (ptr_ijarr[i] == NULL)
		{
			free(ptr_ijarr[r]);
			return (NULL);
		}
		c = 0;
		while (c < width)
			ptr_ijarr[r][c] = 0, c++;
		r++;
	}
	free(ptr_ijarr);
	return (ptr_ijarr);
}
