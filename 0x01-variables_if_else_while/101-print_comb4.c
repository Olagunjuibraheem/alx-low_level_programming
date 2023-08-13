#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	int p_1;
	int p_2;
	int p_3;

	for (p_1 = 0; p_1 <= 7; p_1++)
	{
		for (p_2 = p_1 + 1; p_2 <= 8; p_2++)
		{

			for (p_3 = p_2 + 1; p_3 <= 9; p_3++)
			{
				putchar('0' + p_1);
				putchar('0' + p_2);
				putchar('0' + p_3);

				if (p_1 != 7 || p_2 != 8 || p_3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
