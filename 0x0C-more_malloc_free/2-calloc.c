#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: an array
 * @size: size of array
 * Return: NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *arry;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arry = malloc(size * sizeof(unsigned int));
	if (arry == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arry[i] = nmemb;
		i++;
	}
	return (arry);
}
