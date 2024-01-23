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
{
	int src_len = ft_strlen(src);
	int i;

	for (i = 0; i < src_len; i++)
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
	int len1, len2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	ft_strcpy(dog->name, name);
	ft_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
