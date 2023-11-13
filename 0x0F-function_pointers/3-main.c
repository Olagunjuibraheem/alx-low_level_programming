#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 * @argc: number/ size of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ops = argv[2];
	if (get_op_func(ops) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3]) == 0 && strcmp(ops, "/") == 0) ||
	(atoi(argv[3]) == 0 && strcmp(ops, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ops)(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
