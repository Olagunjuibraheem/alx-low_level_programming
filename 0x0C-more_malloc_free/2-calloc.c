#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: an array
 * @size: size of array
 * Return: NULL if function fails otherwise return a pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arry;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arry = malloc(size * nmemb);
	if (arry == NULL)
		return (NULL);
	_memset(arry, 0, nmemb * size);
	return (arry);
}
