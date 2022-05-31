#include "main.h"

/**
  *
  *
  *
  */

void print_most_numbers(void)
{
	int x;
	
	for (x = '0'; x <= '9'; x++)
	{
		_putchar('\n');
	
		while (x != '2' && x != '4')
		{
			_putchar(x);
		}
	}
}
