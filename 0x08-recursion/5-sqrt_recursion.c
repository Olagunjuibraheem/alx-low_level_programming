#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: squre root of number to be returned
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - a helper function to find the square root
 * of a number recursively
 * @n: squre root of number to be returned
 * @m: the iterating value for square root
 *
 * Return: the square root of n
 */
int _sqrt_recursion_helper(int n, int m)
{
	if (m * m > n)
		return (-1);

	else if (m * m == n)
		return (m);

	return (_sqrt_recursion_helper(n, (m + 1)));
}
