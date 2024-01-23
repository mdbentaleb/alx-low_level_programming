#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure
 * @name: pointer to string
 * @age: float
 * @owner: pointer to string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
