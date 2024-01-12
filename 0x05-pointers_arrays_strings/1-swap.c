#include "main.h"

/**
 * swap_int - spawps the value of two integers
 * using two inputs parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
