#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: pointer to bit
  * @index: index to set the value at
  *
  * Return: 1 if success, -1 if fail
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
