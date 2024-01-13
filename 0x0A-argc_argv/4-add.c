#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @arc: int
 * @arv: array
 * Return: int
 */

int main(int arc, char **arv)
{
	int res = 0;
	int i = 1;
	char *s;

	if (arc > 1)
	{
		while (i <= arc && arv[i])
		{
			s = arv[i];
			if (!(*s >= '0' && *s <= '9'))
			{
				return (printf("Error\n"), 1);
			}
			else
			{
				res = res + atoi(arv[i]);
				i++;
			}
		}
		printf("%d\n", res);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}

