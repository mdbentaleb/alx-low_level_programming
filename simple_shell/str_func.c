#include "shell.h"

/**
 * ft_strlen - returns the length of a string
 * @str: string
 * Return: "int" length
 */

int ft_strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}






/**
 * ft_strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: "-1" if s1 < s2 or "1" if s1 > s2 or "0" if s1 == s2
 */

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		*s1++;
		*s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}






/**
 * check_start_with - checks if str star with search
 * @search: string to search
 * @str: string
 * Return: address of next char of search or NULL
 */

char *check_start_with(const char *search, const char *str)
{
	while (*str)
	{
		if (*str++ != *search++)
			return (NULL);
	}
	return ((char *)search);
}






/**
 * ft_strcat - concatenates 2 string
 * @dest: the destination buffer
 * @src: the source buffer
 * Return: pointer to destination buffer
 */

char *ft_strcat(char *dest, char *src)
{
	char *rtn = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;

	*dest = *src;
	return (rtn);
}
