#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: NULL on failure, otherwise return a pointer to the
 * newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_s3;

	int len1, len2, len3;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	len3 = len1 + len2;

	concat_s3 = malloc(sizeof(char) * (len3 + 1));
	if (concat_s3 == NULL)
		return (NULL);

	len1 = len3 = 0;
	while (s1[len1] != '\0')
	{
		concat_s3[len3] = s1[len1];
		len3++, len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		concat_s3[len3] = s2[len2];
		len3++, len2++;
	}
	concat_s3[len3] = '\0';

	return (concat_s3);
}
