#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array of ponters
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
