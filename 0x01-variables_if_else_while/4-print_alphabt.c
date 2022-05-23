#include <stdio.h>
/**
  * main - Entry point
  *
  * using && to exclude chars
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c;

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
