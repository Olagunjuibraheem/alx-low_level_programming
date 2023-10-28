#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number or size of commmand line arguments
 * @argv: point€r to array of command line arguments
 *
 * Return: Always (0)
 */
int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s\n", argv[0]);

	return (0);
}
