#include "main.h"

/**
 * pritn_most_numbers - prints numbers between 0 and 9 but not 2 and 4
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		_putchar ('0' + x);
		x++;
	}
	_putchar ('\n');
}
