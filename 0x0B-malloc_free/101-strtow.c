#include "main.h"
#include <stdlib.h>
/**
 * strtow - function that splits a string into words.
 * @str: string to be splitted into words
 * Return: a pointer to an array of strings (words), or NULL if failed.
 */
char **strtow(char *str)
{
	char **split_str, *n_str;
	int len, i, j, l;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	split_str = malloc(sizeof(char *) * (len + 1));
	if (split_str == NULL)
		return (NULL);
	n_str = malloc(sizeof(char) * (len + 1));
	if (n_str == NULL)
	{	free(split_str);
		return (NULL);
	}
	j = l = 0;
	while (l < len)
	{
		i = 0;
		while (str[l] != ' ' && str[l] != '\0')
			n_str[i] = str[l], i++, l++;
		n_str[i] = '\0';
		i = 0;
		while (n_str[i] != '\0')
			i++;
		split_str[j] = malloc(sizeof(char) * (i + 1));
		if (split_str[j] == NULL)
		{
			while (j >= 0)
				free(split_str[j]), j--;
			free(split_str);
			return (NULL);
		}
		i = 0;
		while (n_str[i] != '\0')
			split_str[j][i] = n_str[i], i++;
		split_str[j][i] = '\0',	j++, l++;
	}
	split_str[j] = NULL;
	return (split_str);
}
