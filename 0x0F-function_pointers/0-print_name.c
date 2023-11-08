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
	if (f == NULL)
		return;
	f(name);
}
