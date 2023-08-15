#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (1)
 */
int main(void)
{
	char data[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	size_t elements_written = fwrite(data, sizeof(char), sizeof(data) - 1, stderr);

	if (elements_written != sizeof(data) - 1)
	{
		perror("Error writing to stderr");

		return (1);
	}
	return (1);
}
