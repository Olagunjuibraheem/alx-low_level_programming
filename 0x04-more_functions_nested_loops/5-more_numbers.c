#include "main.h"
/**
 * more_numbers - prints the numbers x10, followed by a new line
 *
 * Return: Always (0)
 */

void more_numbers(void)
{
	int n, m;

	n = 0;
	while (n <= 9)
	{
		m = 0;

		while (m <= 14)
		{
			if (m > 9)

				_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
