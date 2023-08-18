#include "main.h"
/**
 * print_numbers - prints the numbers, followed by a new line
 *
 * Return: Always (0)
 */

void print_numbers(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
