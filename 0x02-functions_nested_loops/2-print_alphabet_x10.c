#include "main.h"
/**
 * print_alphabet_x10 - Entry point.
 * Description: print  alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char num, alph;

	for (num = 0; num <= 9; num++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
