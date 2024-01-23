#include <stdlib.h>
#include "dog.h"

/**
 * ft_strlen - return length of a string
 * @str: pointer to string
 * Return: int
 */

int ft_strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * ft_strcpy - copies the string pointed to by src
 * @dest: pointer to string
 * @src: pointer to string
 * Return: pointer to string
 */

char *ft_strcpy(char *dest, char *src)

	for (int i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}


/**
 * new_dog - a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ft_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (ft_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = ft_strcpy(dog->name, name);
	dog->age = age;
	dog->owner = ft_strcpy(dog->owner, owner);
	return (dog);

}

