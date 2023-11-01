#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: command line arguments counter
 * @av: array of command line arguments
 *
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *arg_concat;
	int c, d, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	c = len = 0;
	while (c < ac)
	{
		d = 0;
		while (av[c][d] != '\0')
			d++, len++;
		c++, len++;
	}

	arg_concat = malloc(sizeof(char) * len + 1);

	if (arg_concat == NULL)
		return (NULL);

	c = len = 0;
	while (c < ac)
	{
		d = 0;
		while (av[c][d] != '\0')
		{
			arg_concat[len] = av[c][d];
			len++, d++;
		}
		arg_concat[len] = '\n';
		len++, c++;
	}
	return (arg_concat);
}
