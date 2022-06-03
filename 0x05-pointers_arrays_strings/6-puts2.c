#include "main.h"

/**
  * puts2 - prints every other character of a string
  * @str: string to be referenced for output
  * Return: void (Success)
  */

void puts2(char *str)
{
	int i = 0;

	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (i = 0; i < len; i += 20)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
