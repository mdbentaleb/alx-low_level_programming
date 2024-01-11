#include "main.h"

/**
* is_prime_number - Verify whether n is a prime number
* @n: int
* @n2: square root
* Return: int
*/

int ft_check_prime(int n, int n2);
int is_prime_number(int n)
{
	return (ft_check_prime(n, 2));
}

/**
* ft_check_prime - verifies all numbers smaller than n and can divid it
* @n: int
* @n2: int
* Return: int
*/

int ft_check_prime(int n, int n2)
{
	if (n2 >= n && n >= 2)
	{
		return (1);
	}
	else if (n <= 1 || n % n2 == 0)
	{
		return (0);
	}
	else
	{
		return (ft_check_prime(n, n2 + 1));
	}
}


