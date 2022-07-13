#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: bit to get
  * @index: index to retrieve the value at
  *
  * Return: value of bit at the given index, -1 if fail
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
