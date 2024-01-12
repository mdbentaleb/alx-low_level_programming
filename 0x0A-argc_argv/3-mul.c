#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @arc: int
 * @arv: array
 * Return: the result of the multiplication, followed by a new line
 */

int main(int arc, char **arv)
{
	int sum;

	if (arc == 3)
	{
		sum = atoi(arv[1]) * atoi(arv[2]);
		printf("%d", sum);
	}
	else
	{
		printf("Eroor");
	}
	printf("\n");
	return (0);
}

