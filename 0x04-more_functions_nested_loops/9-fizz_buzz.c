#include <stdio.h>

/**
 * main - prints Fizz, Buzz and FizzBuzz fllowed by a new line
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", n);
		}
		n++;
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
