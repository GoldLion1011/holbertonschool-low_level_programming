#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: size of triangle
  * Return: a triangle
  */

void print_triangle(int size)
{
	int i;

	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i + 1; j++)
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
