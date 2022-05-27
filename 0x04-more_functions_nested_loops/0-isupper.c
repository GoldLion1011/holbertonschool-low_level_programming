#include "main.h"

/**
  * _isupper - checks if int is upper or lowercase letter
  * @c:
  * Return: 1 if uppercase, 0 if lowercase
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
