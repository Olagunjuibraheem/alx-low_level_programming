#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * @array: pointer to array elements
 * @size: size of array
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	i = 0;
	while (i < size)
	{
		if (array[i] != '\0')
		{
			action(array[i]);
		}
		i++;
	}
}
