#include "main.h"
/**
  * int _islower - return 1 if lowercase, 0 if not
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
