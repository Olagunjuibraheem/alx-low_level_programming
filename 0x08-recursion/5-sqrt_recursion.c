#include "main.h"

int nat_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: (-1) If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (nat_sqrt_recursion(n, 0));
	}
}
/**
 * nat_sqrt_recursion - recurses to find the natural
 * @n: number to calculate the sqaure root of
 * @m: iterator
 * Return: the resulting square root
 */
int nat_sqrt_recursion(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	else if (m * m == n)
	{
		return (m);
	}
	else
	{
		return (nat_sqrt_recursion(n, m + 1));
	}
}
