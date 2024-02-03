#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	long nbr, i;

	nbr = 612852475143;
	for (i = 0; i < nbr; i++)
	{
		while (n % i == 0)
			nbr = nbr / i;
	}
	printf("%lu\n", nbr);
	return (0);
}
