#include "main.h"
/**
  * print_alphabet_x10 - prints alphabet 10 times on a new line
  *
  * Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i < 10; i++;)
	{
		_putchar(i);
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
