#include "main.h"

/**
  * _bit_div - converts an int to a binary representation of itself
  * @n: int to be converted
  */

void _bit_div(unsigned long int n)
{
	if (n < 1)
		return;

	_bit_div(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
  * print_binary - prints the binary representation of a number
  * @n: number to convert to binary
  */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_bit_div(n);
}
