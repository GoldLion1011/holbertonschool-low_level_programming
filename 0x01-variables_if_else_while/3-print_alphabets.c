#include <stdio.h>
/**
  * main - Entry point
  *
  * alphaBET
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int lc;
	int uc;

	lc = 'a';
	uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
	putchar ('\n');
	return (0);
}
