#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
  * print_char - prints a char
  * @arg: list of arguments pointing to
  *       character to be printed
  */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
  * print_int - prints an int
  * @arg: list of arguments pointing to
  *       integer to be printed
  */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
  * print_float - prints a float
  * @arg: list of arguments pointing to
  *       float to be printed
  */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
  * print_string - prints a string
  * @arg: list of arguments pointing to
  *       string to be printed
  */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("nil");
		return;
	}

	printf("%s", str);
}

/**
  * print_all - prints anything, followed by a new line
  * @format: string of characters representing the
  *          argument types
  * @...: variable number of arguments to be passed
  */

void print_all(const char * const format, ...)
{
	va_list args;
	int h = 0, k = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + h)))
	{
		k = 0;

		while (k < 4 && (*(format + h) != *(funcs[k].symbol)))
			k++;

		if (k < 4)
		{
			printf("%s", separator);
			funcs[k].print(args);
			separator = ", ";
		}

		h++;
	}

	printf("\n");

	va_end(args);
}
