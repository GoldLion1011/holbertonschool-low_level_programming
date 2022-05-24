#include "main.h"
/**
  * int_isalpha - return 1 if lowercase, 0 if not
  * Return: 1 or 0 (Success)
  */

int _isalpha(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	return (0);
}
