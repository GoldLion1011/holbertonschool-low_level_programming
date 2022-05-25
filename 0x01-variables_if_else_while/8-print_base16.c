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
	char z = '0';

	char y = 'a';

/**	
  *     while (z <= '9');
  *	{
  *		putchar(z);
  *		z++;
  *	}
  *	while (y <= 'f');
  *	{
  *		putchar(y);
  *		y++;
  *	}
  */
	for (z = '0'; z <= '9'; z++)
		putchar(z);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
