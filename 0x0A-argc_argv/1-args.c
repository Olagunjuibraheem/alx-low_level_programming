#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number/ size of command line arguments
 * @argv: poinyer to array of command line arguments
 *
 * Return: Always (0).
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	if (argc >= 1)
		printf("%d\n", argc - 1);


	return (0);
}
