#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: character pointer
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	if (name == NULL)
		return;

	i = 0;
	while (name[i] != '\0')
	{
		f(name[i]);
		i++;
	}
}
