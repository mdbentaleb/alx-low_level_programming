#include <stdio.h>

/**
 * _atoi - converts a string to an integrs
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}

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
		sum = _atoi(arv[1]) * _atoi(arv[2]);
		printf("%d", sum);
	}
	else
	{
		printf("Eroor");
	}
	printf("\n");
	return (0);
}

