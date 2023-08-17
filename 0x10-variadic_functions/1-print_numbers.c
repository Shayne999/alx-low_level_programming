#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: integer seperator string pointer
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(nums, int));
		else if (i == 0)
			printf("%d", va_arg(nums, int));
		else
			printf("%s%d", separator, va_arg(nums, int));
	}
	va_end(nums);
	printf("\n");
}
