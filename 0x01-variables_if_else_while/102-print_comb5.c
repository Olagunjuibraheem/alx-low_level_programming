#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	int dc_1, dc_2;

	for (dc_1 = 0; dc_1 <= 99; dc_1++)
	{
		for (dc_2 = dc_1 + 1; dc_2 <= 99; dc_2++)
		{
			if (dc_1 != dc_2)
			{
				printf("%02d %02d", dc_1, dc_2);

				if (dc_1 != 98 || dc_2 != 99)
				{
					printf(", ");
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
