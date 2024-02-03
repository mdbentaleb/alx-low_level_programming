#include "main.h"
#include <stdio.h>

/**
 * main - print numbers from 1 to 100 followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	c = 1;
	while (c <= 100)
	{
		if (c % 3 == 0 && c % 5 == 0)
			printf("FizzBuzz");

		else if (c % 3 == 0)
			printf("Fizz");

		else if (c % 5 == 0)
		{
			if (c < 100)
				printf("Buzz");
			else
				printf("Buzz");
		}

		else
			printf("%i ", c);
		c++;
	}
	printf("\n");
	return (0);
}
