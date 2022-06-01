#include "main.h"

/**
  * swap_int - swaps values of two ints
  * @a: an int
  * @b: another int
  * Return: the swap is made
  */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
