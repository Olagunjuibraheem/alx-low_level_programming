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
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
