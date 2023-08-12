#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if  (alph == 'e' || alph == 'q')
		alph++;
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
