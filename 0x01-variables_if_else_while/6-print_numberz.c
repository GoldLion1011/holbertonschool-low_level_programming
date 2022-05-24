#include <stdio.h>

/**
  * main - Entry point
  *
  * putchar all base nums
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
