#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @arc: int
 * @arv: array
 * Return: the result of the multiplication, followed by a new line
 */

int main(int arc, char **arv)
{
	int mul;

	if (arc == 3)
	{
		mul = atoi(arv[1]) * atoi(arv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
