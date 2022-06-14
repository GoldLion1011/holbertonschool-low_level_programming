#include "main.h"

/**
  * _strchr - locates first occurance of a char in a string
  * @s: string that is searched
  * @c: char that is searche for
  * Return: pointer to first occurance of c in s
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
