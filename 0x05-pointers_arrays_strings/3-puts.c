#include "main.h"

/**
  * _puts - prints a string followed by a new line
  * @str: string to be printed to stdout
  * Return: string statement
  */

void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\n' && str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
