#include "main.h"

/**
  * _pow_recursion - returns value of x raised to value of y
  * @x: base number
  * @y: exponent
  * Return: -1 if y<0
  */

int _pow_recursion(int x, int y)
{
	int power = 1, i;

	for (i = 1; i <= y; ++i)
	{
		power = power * x;
	}
	if (i == 0)
	{
		return (-1);
	}
	return (power);
}
