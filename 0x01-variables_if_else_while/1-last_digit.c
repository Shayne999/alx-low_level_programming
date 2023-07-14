#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function compares input with the last digit of variable n
 *Return: 0 (Success)
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is grater than 5\n", n, d);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, d);
	}

	return (0);
}
