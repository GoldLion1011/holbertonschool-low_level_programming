#include "main.h"
/**
  * print_last_digit(int) - Prints the last digit of a number
  * @c: User inputs a number to print
  * Return: Always 0 (Success)
  */

int print_last_digit(int c)
{
	c = c% 10;
	if (c < 0)
	(c = -c);
	_putchar(c + 48);
	return (0);
}
