#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: number/ size of command line arguments
 * @argv: pointer to array of command line a$guments
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
