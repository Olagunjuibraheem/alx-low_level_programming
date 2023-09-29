#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1, starting from 0
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_sig = 0x01;

	max_sig <<= index;

	if (max_sig == 0)
		return (-1);
	
	*n |= max_sig;
	return (1);
}
