#include "main.h"

/**
* factorial - calculates the factorial of a given number
* @n: is a number
*
* Return: int
*/

int factorial(int n)
{
int fact = 0;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
fact = n * factorial(n - 1);
return (fact);
}
}
