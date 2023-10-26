#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: integer to check as prime number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else if (n == 2 || n == 3)
		return (1);

	return (prime_number_helper(n, 2));
}

/**
 * prime_number_helper - a function that help to return a prime number
 * @n: integer to check as prime number
 * @m: iterative value to find prime number
 *
 * Return: a prime number
 */
int prime_number_helper(int n, int m)
{
	if (m * m > n)
		return (1);

	else if (n % m == 0)
		return (0);

	else
		return (prime_number_helper(n, m + 1));
}
