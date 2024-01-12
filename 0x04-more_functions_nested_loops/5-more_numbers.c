#include "main.h"

/**
 * more_numbers - print 0 -14 ten times
 * only use _putchar three times
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int N, Row, Count;

	for (Row = 1; Row <= 10; Row++)
	{
		for (Count = 0; Count <= 14; Count++)
		{
			N = Count;
			if (Count > 9)
			{
				_putchar(1 + 48);
				N = Count % 10;
			}
			_putchar(N + 48);
		}
		_putchar('\n');
	}
}
