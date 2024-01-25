#include "3-calc.h"

/**
 * main - program
 * @arc: number of arguments
 * @arv: arguments array
 * Return: 0
 */


int main(int arc, char **arv)
{
	int (*funcOp)(int, int), nbr1, nbr2;


	if (arc == 4)
	{
		nbr1 = atoi(arv[1]);
		nbr2 = atoi(arv[3]);

		funcOp = get_op_func(arv[2]);

		if (!funcOp)
		{
			printf("Error\n");
			exit(99);
		}

		if (!nbr2 && (arv[2][0] == '/' || arv[2][0] == '%'))
			printf("Error\n"), exit(100);

		printf("%d\n", funcOp(nbr1, nbr2));

	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}

