#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - function that add two integers
 * @a: first input integer
 * @b: second input integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	int add;

	add = (a + b);

	return (add);
}

/**
 * op_sub - function that add two integers
 * @a: first input integer
 * @b: second input integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	int diff;

	diff = (a - b);

	return (diff);
}

/**
 * op_mul - function that multiply two integers
 * @a: first input integer
 * @b: second input integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b);
{
	int prod;

	prod = (a * b);

	return (prod);
}

/**
 * op_div - function that divide two integers
 * @a: first input integer
 * @b: second input integer
 *
 * Return: result of the division of a by b
 */
int op_div(int a, int b);
{
	int div;

	div = (a / b);
	if (b == 0)
	{
		printf("Error\n")
			exit(100);
	}
	return (div);
}

/**
 * op_mod - function that find the remainder of two integers
 * @a: first input integer
 * @b: second input integer
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	int mod;

	mod = (a / b);
	if (b == 0)
	{
		printf("Error\n")
			exit(100);
	}
	return (mod);
}
