#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: Number of
 * @argv: Arrays of
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
	}
	i = 1;
	if (argc == 3)
	{
		result = atoi(argv[i]) * atoi(argv[argc - 1]);
		printf("%d\n", result);
	}
	return (result);
}
