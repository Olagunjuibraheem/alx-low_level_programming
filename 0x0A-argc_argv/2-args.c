#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: Number of arguements 
 * @argv: Arrays of argument 
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
