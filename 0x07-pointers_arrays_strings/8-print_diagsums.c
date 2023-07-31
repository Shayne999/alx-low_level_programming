#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square of integers
 * @a: pointer to matrix of integers
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d", sum1, sum2);
}
