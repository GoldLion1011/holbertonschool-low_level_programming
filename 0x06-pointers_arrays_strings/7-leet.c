#include "holberton.h"

/**
  *
  *
  *
  *
  *
  */

char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";

	char *numbers = "4433007711";

	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
