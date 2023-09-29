#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number to search
 * @index: index of bit
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int maxim = 0x01;

	maxim <<= index;
	if (maxim == 0)
		return (-1);

	if ((n & maxim))
		return (1);
	else
		return (0);
}
