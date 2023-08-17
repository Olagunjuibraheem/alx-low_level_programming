#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	int n = 1;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
			n++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
