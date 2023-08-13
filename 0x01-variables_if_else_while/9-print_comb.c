#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	int posc = 0;

	while (posc <= 9)
	{
		putchar('0' + posc);
		posc++;
		if (posc <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
