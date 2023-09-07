#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: character string
 * Return: (NULL) if size is NULL, otherwise return a pointer
 */
char *_strdup(char *str)
{
	char *nstr;
	int len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	nstr = malloc((len + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		nstr[len] = str[len], len++;
	nstr[len] = '\0';
	return (nstr);
}
