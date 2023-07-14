#include <stdio.h>
/**
 * main - Function prints numbers of base 16 in lowercase.
 * Return:0 (Success)
 */

int main(void)
{
	int i;
	int a;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
