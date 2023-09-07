#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string pointer 1
 * @s2: string pointer 2
 * Return: NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len1, len2, len, i, j;

	if (s1 == NULL)
		return (s1);
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	if (s2 == NULL)
		return (s2);
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	len = len1 + len2;
	s3 = malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
		return ('\0');
	i = 0;
	while (s1[i] != s1[len1])
		s3[i] = s1[i], i++;
	i = len - len2;
	j = 0;
	while (s2[j] != s2[len])
		s3[i] = s2[j], j++, i++;
	s[3] = '\0';
	return (s3);
}
