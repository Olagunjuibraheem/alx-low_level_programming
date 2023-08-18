#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, followed by a new line
 *
 * Return: Always (0)
 */

void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n == 2 || n == 4)
		{
			n++;
		}
		else
		{
			_putchar('0' + n);
			n++;
		}
	}
	_putchar('\n');
}
