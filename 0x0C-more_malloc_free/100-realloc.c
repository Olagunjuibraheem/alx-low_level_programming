#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes of the new memory block
 *
 * Return: Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		i = 0;
		while (i < old_size)
			((char *)new_ptr)[i] = ((char *)ptr)[i], i++;
	}
	else
	{
		i = 0;
		while (i < new_size)
			((char *)new_ptr)[i] = ((char *)ptr)[i], i++;
	}
	free(ptr);
	return (new_ptr);
}
