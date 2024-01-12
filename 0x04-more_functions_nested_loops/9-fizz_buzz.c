#include "main.h"
#include <stdio.h>

/**
 * main - print numbers from 1 to 100 followed by a new line
 * numbers that are multiples of 3 print FIZZ
 * numbers that are multiples of 5 print BUZZ
 * numbers that are multiples of 3 and 5 print FizzBuzz
 * each number and word to be separated by space
 *
 * Return: Always 0
 */

int main(void)
{
	int N;

	for (N = 1; N <= 100; N++)
	{
		if (N % 3 == 0 && !(N % 5 == 0))
			printf("Fizz");
		else if (N % 5 == 0 && !(N % 3 == 0))
			printf("Buzz");
		else if (N % 3 == 0 && N % 5 == 0)
			printf("FizzBuzzz");
		else
			printf("%d", N);
		if (N != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
