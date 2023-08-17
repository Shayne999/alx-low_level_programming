#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%s", va_arg(str, char *));
		else if (i == 0)
			printf("%s", va_arg(str, char *));
		else
			printf("%s%s", separator, va_arg(str, char *));
	}
	va_end(str);
	printf("\n");
}

