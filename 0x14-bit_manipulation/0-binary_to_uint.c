#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, num, conv_num;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
		len++;

	num = 1;
	conv_num = 0;
	while (len > 0)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			conv_num += num;
		num *= 2;
		len--;
	}
	return (conv_num);
}
