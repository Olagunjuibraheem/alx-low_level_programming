#include "3-calc.h"
/**
 * op_add - a function that find the sum two integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - a function that find the difference two integers
 * @a: integer 1
 * @b: integer 2
 * Return: diff
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}
/**
 * op_mul - a function that find the product two integers
 * @a: integer 1
 * @b: integer 2
 * Return: prod
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}
/**
 * op_div - a function that find the division two integers
 * @a: integer 1
 * @b: integer 2
 * Return: div
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
 * op_mod - a function that find the remainder two integers
 * @a: integer 1
 * @b: integer 2
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
