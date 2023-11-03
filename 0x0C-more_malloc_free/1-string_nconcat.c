#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be copied from string 2
 * Return: a pointer to the newly allocated space in memory or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_nstr;
	unsigned int len1, len2, len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
	{
		len = len1 + len2;
		concat_nstr = malloc(sizeof(char) * (len + 1));
	}
	else
		concat_nstr = malloc(sizeof(char) * (len1 + n + 1));
	if (concat_nstr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != s1[len1])
		concat_nstr[i] = s1[i], i++;
	i = len1;
	j = 0;
	while (n < len2 && i < len1 + n)
		concat_nstr[i] = s2[j], i++, j++;
	while (n >= len2 && i < len)
		concat_nstr[i] = s2[j], i++, j++;
	concat_nstr[i] = '\0';
	return (concat_nstr);
}
