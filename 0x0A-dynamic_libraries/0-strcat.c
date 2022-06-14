#include "holberton.h"

/**
  * *_strcat - concats two strings
  * @dest: destination of array
  * @src: source of array
  * Return: dest (sucess)
  */

char *_strcat(char *dest, char *src)
{
	int c = 0;

	int d = 0;

	while (dest[c])
	{
		c++;
	}
	while (src[d])
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	return (dest);
}
