#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character of array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr_array = malloc(sizeof(char) * size);
	if (ptr_array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		ptr_array[i] = c;
		i++;
	}
	return (ptr_array);
}
