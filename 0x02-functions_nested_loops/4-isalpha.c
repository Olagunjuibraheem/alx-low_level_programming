#include "main.h"
/**
 * Description: _islower - check if char is lower case.
 * @c: is the char to be checked
 * Return: 1 if if c is a letter, lowercase or uppercase
 * Returns: 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
