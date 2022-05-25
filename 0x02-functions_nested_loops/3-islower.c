#include "main.h"
/**
  * _islower - Return 1 if lowercase, 0 if not
  * @c: c is given by user
  * Return: 1 or 0 (Success)
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
