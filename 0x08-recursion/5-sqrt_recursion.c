#include "main.h"

/**
* _sqrt_recursion - calculates the square root
* @n: int
* @v: square root
* Return: int
*/

int ft_square(int n, int v);
int _sqrt_recursion(int n)
{
return (ft_square(n, 1));
}

/**
* ft_square - auxiliary function to calculate the square root
* @n: int
* @v: square root
* Return: int
*/

int ft_square(int n, int v)
{
if (v * v == n)
{
return (v);
}
else if (v * v < n)
{
return (ft_square(n, v + 1));
}
else
return (-1);
}


