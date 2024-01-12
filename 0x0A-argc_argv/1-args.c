#include <stdio.h>

/**
 * main -  program that prints the number of arguments passed into it.
 * a
 * @argc: int
 * @argv: array
 * Return: 0;
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
}
