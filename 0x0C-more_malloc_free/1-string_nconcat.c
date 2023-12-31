#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to cocatenate to s1
 *
 * Return: a pointer to the newly allocated space in memory or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, l1, l2, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
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
	while (s1[i] != s1[l1])
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
