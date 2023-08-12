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
		if  (alph == 'e')
		alph = alph + 1;
		if  (alph == 'q')
		alph = alph + 1;
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
