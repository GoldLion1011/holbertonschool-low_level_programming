#include "main.h"

/**
  * print_chessboard - function that prints a chessboard
  * @a: print row of an array
  * Return: nothing
  */

void print_chessboard(char (*a)[8])
{
	int b, w;

	for (b = 0; b < 8; b++)
	{
		for (w = 0; w < 8; w++)
		{
			if (w == 7)
			{
				_putchar(a[b][w]);
				_putchar('/n');
			}
			else
				_putchar(a[b][w]);
		}
}
