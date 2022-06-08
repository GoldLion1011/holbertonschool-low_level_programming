#include "main.h"

/**
  * _print_rev_recursion - prints a string followed by a new line
  * @s: pointer to a string to be printed
  * Return: nothing
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
