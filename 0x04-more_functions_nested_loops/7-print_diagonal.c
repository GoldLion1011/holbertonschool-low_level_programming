#include "main.h"

/**
  * print_diagonal - prints diagonal lines
  * @n: is an incrementer
  * Return: int n
  */

void print_diagonal(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= '0')
	{
		_putchar('\n');
	}
}
