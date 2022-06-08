#include "main.h"

/**
  * _pow_recursion - returns value of x raised to value of y
  * @x: base number
  * @y: exponent
  * Return: -1 if y<0
  */

int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	power *= _pow_recursion(x, y - 1);

	return (power);
}
