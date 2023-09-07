#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * @size: size of an array of character
 * @c: characters of array
 * Return: (NULL) if size is 0, otherwise return (c)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	free(arr);
	return (arr);
}
