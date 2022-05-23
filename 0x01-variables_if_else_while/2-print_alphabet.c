#include <stdio.h>
/**
  * main - Entry point
  *
  * Alphabet game
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int lc;

	lc = 'a';

	while (lc <= 'z')
	{
		putchar(lc);
		((lc++));
	}
	putchar ('\n');
	return (0);
}
