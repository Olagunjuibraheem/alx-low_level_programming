#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string to append
 * @s2: string to concantenate
 * @n: number of bytes from s2 to concantenate to s1
 * Return: NULL if it fail.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2, l;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";

	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
	{
		l = l1 + l2;
		s3 = malloc(sizeof(char) * (l + 1));
	}
	else
		s3 = malloc(sizeof(char) * (l1 + n + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		s3[i] = s1[i], i++;
	i = l1;
	j = 0;
	while (n < l2 && i < l1 + n)
		s3[i] = s2[j], i++, j++;
	while (n >= l2 && i < l)
		s3[i] = s2[j], i++, j++;
	s3[i] = '\0';
	return (s3);
}
