#include "calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_op_func - function that selects the correct function to perform the
 * operation asked by the user.
 * @s: Character ppointer
 * Return: result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i, *result;

	i = 0;
	while (i < 5 && s[i] != '\0')
	{
		if (s == ops[i].op)
			result = (ops[i].f);
		printf("%d\n", result[i]);
		i++;
	}
	return (NULL);
}
