#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * return: square root of x
 *
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 * prime factor of number (num)
 *
 * @num: number to find
 */
void largest_prime_factor(long int num)
{
	int prmNU, largest;

	/* first divide with the smallest prime number (two) */
	while (num % 2 == 0)
		num = num / 2;
	/* num must be odd se we proceed to the next prime number (plus two) */
	for (prmNU = 3; prmNU <= _sqrt(num); prmNU += 2)
	{
		while (num % prmNU == 0)
		{
			num = num / prmNU;
			largest = prmNU;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * return: always 0
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
