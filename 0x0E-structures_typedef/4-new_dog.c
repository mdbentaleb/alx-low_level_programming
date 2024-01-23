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
	dog_t *dg;

	if (!name || age < 0 || !owner)
		return (NULL);
	dg = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dg->name = malloc(sizeof(char) * (ft_strlen(name) + 1));
	if ((*dg).name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (ft_strlen(owner) + 1));
	if ((*dg).owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	dg->name = ft_strcpy(dg->name, name);
	dg->age = age;
	dg->owner = ft_strcpy(dg->owner, owner);
	return (dg);

}

