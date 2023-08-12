#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	for (; alph <= 'z'; alph++)
	{
	putchar(alph);
	}

	for (; ALPH <= 'Z'; ALPH++)
	{
	putchar(ALPH);
	}
	putchar('\n');
	return (0);
}
