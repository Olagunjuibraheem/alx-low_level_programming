#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt_num = 0;
	unsigned long int current_num;
	unsigned long int bitw_exclusive = n ^ m;

	i = 63;
	while (i >= 0)
	{
		current_num = bitw_exclusive >> i;
		if (current_num & 1)
			cnt_num++;
		i--;
	}

	return (cnt_num);
}

