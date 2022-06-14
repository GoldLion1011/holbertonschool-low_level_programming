#include "main.h"

/**
  * *_strcpy - copies a pointed to string
  * @src: pointer to array to be copied
  * @dest: destination that src is copied to
  * Return: the pointer to dest (success)
  */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c++] = '\0';
	return (dest);
}
