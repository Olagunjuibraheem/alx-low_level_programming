#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: pointer character
 * @age: integer value
 * @owner: pointer character
 *
 * Rerurn: a poinyer or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[i] != '\0'; j++)

		*new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	(*new_d).name = malloc(sizeof(char) * (i + 1));
	if ((*new_d).name == NULL)
		free((*new_d).name);
	return(NULL);
	for (i = 0; name[i] != '\0'; i++)
		(*new_d).name[i] = name[i];

	(*new_d).owner = malloc(sizeof(char) * (j + 1));
	if ((*new_d).owner == NULL)
		free((*new_d).owner);
	return(NULL);
	for (j = 0; owner[i] != '\0'; j++)
		(*new_d).owner[j] = owner[j];

	new_d->age = age;

	free(new_d);
	return(new_d);
}
