#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer to array
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int last = n - 1;
	int tmp;

	while (i < last)
	{
		tmp = a[i];
		a[i] = a[last];
		a[last = tmp];
		i++;
		last--;
	}

}

