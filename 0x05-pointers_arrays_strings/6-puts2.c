#include "main.h"

/**
  *
  *
  *
  */

void puts2(char *str)
{
	int j = 0;

	while
(str[j] != '\n' && str[j] != '\0')
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
