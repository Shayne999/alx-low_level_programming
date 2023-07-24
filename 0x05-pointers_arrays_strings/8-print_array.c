#include "main.h"
#include <stdio.h>

/**
 * print_array - main function
 * @a: first parameter
 * @n: second parameter
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
