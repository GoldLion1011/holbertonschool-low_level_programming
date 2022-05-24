#include <stdio.h>

/**
  * main - Entry point
  *
  * putchar alphabet in reverse
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int x;

	x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
