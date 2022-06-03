#include "main.h"

/**
  * puts_half - prints the back half of string
  *
  * Return: void (success)
  */

void puts_half(char *str)
{
	int j, len, n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		n = len / 2;
		for (j = n; j <= len - 1; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (len - 1) / 2;
		for (j = len - n; j <= len - 1; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
