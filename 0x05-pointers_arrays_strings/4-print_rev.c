#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s: string to be printed
  * Return: string to stdout
  */

void print_rev(char *s)
{
	int i;

	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
