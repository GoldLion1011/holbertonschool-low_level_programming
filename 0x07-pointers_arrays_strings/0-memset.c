#include "main.h"

/**
  * _memset - fills memory with constant byte
  * @s: pointer to n
  * @b: constant byte
  * @n: first n bytes of an array
  * Return: char (success)
  */

char *_memset(char *s, char b, unsigned int n)
{
	char* p = s;
	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
