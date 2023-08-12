#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
	putchar(d + '0');
	d++;
	}
	putchar('\n');
	return (0);
}
