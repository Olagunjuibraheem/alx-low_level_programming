#include "main.h"
/**
 * print_line - ffunction that draws a straight line in the terminal
 * @n: number of times to print
 * Return: Always (0)
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
