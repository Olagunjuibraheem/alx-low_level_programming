#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	int p_1 = 0;
	int p_2;

	while (p_1 <= 8)
	{
		p_2 = p_1 + 1;;
		while (p_2 <= 9)
		{
			putchar('0' + p_1);
			putchar('0' + p_2);
			if (p_1 != 8 || p_2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			p_2++;
		}
		p_1++;
	}
	putchar('\n');
	return (0);
}
