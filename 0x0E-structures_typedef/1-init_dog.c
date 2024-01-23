#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer
 * @name: pointer to string
 * @age: float
 * @owner: pointer to string
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

