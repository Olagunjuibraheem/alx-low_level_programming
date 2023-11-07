#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("%s\n", d->name);

	if (d->age <= 0)
		printf("(nil)");
	else
		printf("%f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("%s\n", d->owner);
}
