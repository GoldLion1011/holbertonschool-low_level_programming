#include "holberton.h"

/**
  * _strncat - concats two strings of an array
  * @dest: destination of array
  * @src: source of array
  * @n: bytes to use
  * Return: char (success)
  */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;

	int d = 0;

	while (dest[c])
	{
		c++;
	}
	for (d = 0; d < n; d++)
	{
		if (src[d])
		{
			dest[c] = src[d];
			c++;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
