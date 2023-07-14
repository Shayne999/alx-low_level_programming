#include <stdio.h>
/**
 * main - Function prints out alphabet in both lower and uppercase.
 * Return: 0(Success)
 */

int main(void)
{
	int u = 65;
	int l = 97;

	while (u <= 90)
	{
		putchar(l);
		l++;
	}
	while (l <= 122)
	{
		putchar(u);
		u++;
	}

	return (0);
}
