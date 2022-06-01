#include "main.h"

/**
  *
  *
  *
  */

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_reverse(s + 1);
		_putchar('s');
	}
}
