#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: number of command li e arguments
 * @argv: pointer to array of command li e arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, c, get_int, sum;
	char *tmp;

	sum = 0;
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			tmp = argv[i];
			c = 0;
			while (tmp[c] != '\0')
			{
				if (tmp[c] < 48 || tmp[c] > 57)
				{
					printf("Error\n");
					return (1);
				}
				c++;
			}
			get_int = atoi(tmp);
			sum += get_int;
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
