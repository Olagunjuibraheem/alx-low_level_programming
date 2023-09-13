#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: variable for memory allocation
 *
 * Return: Always (0)
 */
void *malloc_checked(unsigned int b)
{
	void *memal;

	memal = malloc(b * sizeof(unsigned int));
	if (memal == NULL)
		exit(98);
	return (memal);
}
