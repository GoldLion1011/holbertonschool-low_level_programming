#include "main.h"

/**
  *
  *
  *
  */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	if (n <= '0')
	{
		_putchar('\n');
	}
}
