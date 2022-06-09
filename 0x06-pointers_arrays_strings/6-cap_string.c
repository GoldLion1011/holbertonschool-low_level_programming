#include "holberton.h"

/**
  * cap_string - capitalizes the first letter of a word in a string
  * @str: string to return
  * Return: string
  */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 0;
	while
(str[i])
	{
		switch (str[i])
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
