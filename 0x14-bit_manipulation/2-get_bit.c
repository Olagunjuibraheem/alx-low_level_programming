#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number to search
 * @index: index of bit
 *
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max_sig = 0x01;

	max_sig <<= index;

	if (max_sig == 0)
		return (-1);

	if ((n & max_sig))
		return (1);

	else
		return (0);
}
