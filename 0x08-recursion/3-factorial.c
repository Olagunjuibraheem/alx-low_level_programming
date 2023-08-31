#include "main.h"

/**
 * factorial - function that returns the factorial of a number.
 * @n: number
 * Return: (-1) if n<0, (factorial of n) if otherwise.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
