#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	char alph = 'a';

	while (alph != 'e' && alph != 'q')
	{
		if  (alph <= 'z')
			alph = alph + 1;

	putchar(alph);
	}
	putchar('\n');
	return (0);
}

