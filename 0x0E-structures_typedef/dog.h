#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: a new type struct dog with members.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
