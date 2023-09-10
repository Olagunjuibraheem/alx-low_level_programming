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
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		printf("%d\n", sum);
		}
	}
	return (0);
}
