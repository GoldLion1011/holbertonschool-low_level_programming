#include "holberton.h"

/**
  * string_toupper - converts lowercase chars to uppercase
  * @s: points to string to be converted to uppercase
  * Return: char (success)
  */

char *string_toupper(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] >= 'a' && s[m] <= 'z')
		{
			s[m] = s[m] - 32;
		}
	}
	return (s);
}
