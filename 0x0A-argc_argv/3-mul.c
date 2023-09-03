#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: Number of
 * @argv: Arrays of
 * Return: (1) If the program arguments is not two, otherwise return (result).
 */
int main(int argc, char *argv[])
{
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = 1;
	if (argc == 3)
	{
		result = atoi(argv[i]) * atoi(argv[argc - 1]);
		printf("%d\n", result);
	}
	return (result);
}
