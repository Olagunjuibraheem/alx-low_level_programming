#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: string to check for palindrome
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int str_len;

	str_len = string_length(s);

	if (*s == '\0')
		return (1);

	return (palindrome_helper(s, s, s + (str_len - 1)));
}

/**
 * palindrome_helper - a function that help to check palindrome
 * @s: string to check for palindrom
 * @first: string to check characters from the fist character
 * @last: string to check characters from the last character
 *
 * Return: palindrome number
 */
int palindrome_helper(char *s, char *first, char *last)
{
	if (first >= last)
		return (1);

	if (*first != *last)
		return (0);

	return (palindrome_helper(s, first + 1, last - 1));
}

/**
 * string_length - a function that returns the length of a string
 * @s: string length to be returned
 *
 * Return: leng of the string
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + (string_length(s + 1)));
}
