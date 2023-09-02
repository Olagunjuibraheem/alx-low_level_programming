#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line.
 * @str: is the string
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
