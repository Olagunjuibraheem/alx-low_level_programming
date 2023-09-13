#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n:
 * Return: NULL if it fail.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, l1, l;
	unsigned int j, l2;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (l2 <= n)
	{
		if (s2[l2] != '\0')
			l2++;
	}
	l = l1 + l2;
	s3 = malloc(l + 1);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		j = 0;
		while (j <= n)
		{
			if (s2[j] != '\0')
			{
				s3[i] = s1[j];
			}
			j++;
		}
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
