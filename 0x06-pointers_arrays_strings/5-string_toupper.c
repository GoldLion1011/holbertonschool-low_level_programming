#include "holberton.h"

/**
  *
  *
  *
  *
  */

char *string_toupper(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] >= 'a' && s[m] <= 'z')
		{
			s[m] =s[m] - 32;
		}
	}
	return (s);
}	
