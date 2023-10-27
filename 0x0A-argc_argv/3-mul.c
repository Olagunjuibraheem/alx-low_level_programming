#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of command line aguments
 * @argv: pointer to array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int prod_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		prod_2 = atoi(argv[1]) * atoi(argv[argc - 1]);
		printf("%d\n", prod_2);
	}

	return (0);
}
