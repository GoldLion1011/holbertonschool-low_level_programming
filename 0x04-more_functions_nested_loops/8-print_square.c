#include "main.h"

/**
  * print_square - prints a square followed by a new line
  * @size: size of square
  * Return: square
  */
void print_square(int size)
{
	int x;

	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
