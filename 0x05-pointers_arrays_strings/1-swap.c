#include "main.h"

/**
 *swap_int - function that swaps the values of two integers.
 *@a: is the fist integer
 *@b: is thhe second integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;
       
	n = *a;	 
	*a = *b;
	*b = n;
}
