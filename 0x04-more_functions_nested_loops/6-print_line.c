#include "main.h"

/**
  * print_line - prints a horizontal line
  * @n: length of line
  * Return: int n
  */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
