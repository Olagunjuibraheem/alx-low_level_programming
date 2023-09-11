#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: Number of string
 * @argv: Array of string arrays
 * Return: (1) If program arguments contain letter, otherwise return (0).
 */
int main(int argc, char *argv[])
{
	int i, get_int, sum;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				get_int = atoi(argv[i]);
				sum += get_int;
			}
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
