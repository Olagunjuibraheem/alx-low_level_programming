#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @s: is the string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = 0; while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
