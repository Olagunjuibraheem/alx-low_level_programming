#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if ac == 0, or av == NULL or program failed
 */
char *argstostr(int ac, char **av)
{
	int i, c, len, j;
	char *acs;

	if (ac == 0 || av == NULL)
		return (NULL);

	j = 0;
	len = 0;
	i = 0;
	while (i < ac)
	{
		c = 0;
		while (av[i][c] != '\0')
			c++, len++;
		i++;
	}
	len += ac;
	acs = malloc(sizeof(char) * len + 1);
	if (acs == NULL)
		return (NULL);

	j = 0;
	i = 0;
	while (i < ac)
	{
		c = 0;
		while (av[i][c] != '\0')
			acs[j] = av[i][c], c++, j++;
		if (i < ac - 1)
			acs[j] = '\n', j++;
		i++;
	}
	acs[j] = '\0';
	return (acs);
}
