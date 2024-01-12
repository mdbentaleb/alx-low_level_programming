#include <stdio.h>

/**
 * main - program that prints all arguments it receives,
 *	followed by a new line.
 * @arc: int
 * @arv: array
 * Return: 0
 */

int main(int arc, char **arv)
{
	int i = 0;

	while (i < arc)
	{
		printf("%s\n", arv[i]);
		i++;
	}
	return (0);
}

