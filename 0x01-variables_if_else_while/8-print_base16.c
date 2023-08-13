#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	int hex;
	int num;

	for (hex = 0; hex <= 9; hex++)
	{
	putchar('0' + hex);
	}
	for (num = 'a';  num <= 'f'; num++)
	{
	putchar(num);
	}
	putchar('\n');
	return (0);
}
