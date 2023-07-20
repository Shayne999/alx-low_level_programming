#include "main.h"

/**
 *print_line - Function entry point
 *@n: number of characters to be printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar (95);
			i++;
		}
	}
	_putchar ('\n');
}



