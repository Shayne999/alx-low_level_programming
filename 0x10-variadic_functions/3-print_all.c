#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	char *str;

	va_list type;

	va_start(type, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(type, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(type, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(type, double));
					break;
				case 's':
					str = va_arg(type, char *);
					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(type);
	printf("\n");
}

