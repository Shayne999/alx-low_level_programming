#include <stdio.h>
/**
 * main - Function prints all possible combinations of a single digit number.
 * Returm: 0(Success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
