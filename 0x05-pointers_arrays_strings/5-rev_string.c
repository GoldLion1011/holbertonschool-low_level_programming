#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  * Return: void (Success)
  */

void rev_string(char *s)
{
	int i;

	int n = 0;

	int temp = 0;

	while
(s[n] != '\0') n++;

	for (i = 0; i < n / 2; i++)
	{
		temp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = temp;
	}
}
