#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum integer range
 * @max: maximum integer range
 *
 * Return: the pointer to the newly created array or NULL if failed
 */
int *array_range(int min, int max)
{
	int *c_array;
	int array_size, i;

	if (min > max)
		return (NULL);

	array_size = (max - min) + 1;
	c_array = malloc(sizeof(int) * array_size);
	if (c_array == NULL)
		return (NULL);

	i = 0;
	while (i < array_size)
		c_array[i++] = min++;

	return (c_array);
}
