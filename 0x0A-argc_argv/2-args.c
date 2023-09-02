#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: Number of arguements
 * @argv: Arrays of argument
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i != argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
