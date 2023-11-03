#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of bytes of each elements
 *
 * Return: a pointer to characters to _calloc
 */

char *_memset(char *s, int b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: array of elements
 * @size: size of array
 *
 * Return: a pointer to the allocated memory, or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	array = _memset(array, 0, nmemb * size);
	return (array);
}
