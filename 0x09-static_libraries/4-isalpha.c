#include "main.h"
/**
  * _isalpha - Return 1 if lowercase, 0 if not
  * @c: User inputs value
  *Return: 1 or 0 (Success)
  */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
