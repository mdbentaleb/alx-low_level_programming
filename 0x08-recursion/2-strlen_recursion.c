#include "main.h"

/**
* _strlen_recursion - calculates the length of the string
* @s: is a pointer to the string
*
* Return: int
*/

int _strlen_recursion(char *s)
{
int len = 0;
if (*s != '\0')
{
len = len + (_strlen_recursion(s + 1) + 1);
}
return (len);
}
