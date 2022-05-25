#include "main.h"
/**
  * print_sign - Prints the value of a number
  * @n: User inputs value for n
  * Return: -1 if neg, 1 if pos, 0 if all else
  */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
