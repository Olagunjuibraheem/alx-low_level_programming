#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: number to print in binary
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	int i, cnt_num;

	i = 0;
	cnt_num = 0;
	unsigned int current_num;

	i = 63;
	while (i >= 0)
	{
		current_num = n >> i;

		if (current_num & 1)
		{
			_putchar('1');
			cnt_num++;
		}
		else if (cnt_num)
			_putchar('0');
		i--;
	}
	if (!cnt_num)
		_putchar('0');
}

