#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: size of triangle to print
 *
 * Return: Always (0)
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < size)
		{
			j = 1;
			while (j <= size)
			{
				if ((j + i) < size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
