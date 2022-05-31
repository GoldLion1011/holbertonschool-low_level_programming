#include "main.h"

/**
  * print_square - prints a square followed by a new line
  * @size: size of square
  * Return: square
  */
void print_square(int size)
{
	int x;

	for (x = 0; x < size; x++)
	{
		_putchar('#');
	}
	if (size <= '0')
	{
		_putchar('\n');
	}
}
