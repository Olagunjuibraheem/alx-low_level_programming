#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arry;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arry = malloc(sizeof(int) * size);
	if (arry == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arry[i] = min;
		min++, i++;
	}
	return (arry);
}
