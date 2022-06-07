#include "main.h"

/**
  * _strchr - locates first occurance of a char in a string
  * @s: string that is searched
  * @c: char that is searche for
  * Return: pointer to first occurance of c in s
  */

char *_strchr(char *s, char c)
{
	if (*s == c)
	{
		return (s);
	}
	while (*s++)
	{
		return ('\0');
	}
}
