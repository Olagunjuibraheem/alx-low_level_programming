#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: the index of the first element for which the
 * cmp function does not return 0, -1 If size <= 0 or
 * no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || size <=0)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i])!= '\0')
			return (i);
		i++;
	}
	return (-1);

}
