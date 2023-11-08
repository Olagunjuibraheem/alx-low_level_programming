#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * D#scription: array iterator
 * @array: pointer to array elements
 * @size: size of array
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
