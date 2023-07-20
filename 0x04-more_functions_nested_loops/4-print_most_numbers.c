#include "main.h"

/**
 * pritn_most_numbers - prints numbers between 0 and 9 but not 2 and 4
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar ('0' + x);
		}
	}
	_putchar ('\n');
}
