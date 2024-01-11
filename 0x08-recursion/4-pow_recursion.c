#include "main.h"

/**
* _pow_recursion - calculates the power of a number
* @x: base
* @y: power
*
* Return: int
*/

int _pow_recursion(int x, int y)
{
int pow = 0;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (x);
}
else
{
pow = x * _pow_recursion(x, (y - 1));
return (pow);
}
}
