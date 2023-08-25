#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: is the string
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	if (*str == '\0')
	{
		_putchar('\n');
	}
}
