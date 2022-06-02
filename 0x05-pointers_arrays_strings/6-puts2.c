#include "main.h"

/**
  * puts2 - prints every other character of a string
  * @str: string to be referenced for output
  * Return: void (Success)
  */

void puts2(char *str)
{
	int j = 0;

	while
(str[j] != '\0')
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
