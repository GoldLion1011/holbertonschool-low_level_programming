#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - prints strings followed by a new line
  * @separator: string to be printed between strings
  * @n: number of strings passed
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index = 0;

	va_start(strings, n);

	if (separator == NULL)
		separator = "";

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			str = "(nil)";

		if (index == n - 1)
		{
			printf("%s", str);
			continue;
		}
		printf("%s%s", str, separator);
	}

	printf("\n");

	va_end(strings);
}
