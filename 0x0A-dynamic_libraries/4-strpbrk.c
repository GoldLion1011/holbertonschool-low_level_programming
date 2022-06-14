#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: string to search
  * @accept: bytes to search for
  * Return: pointer to the byte in s that matches one of the bytes in accept,
  * or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
				return (s);
		}
		s++;
	}
	return ('\0');
}
