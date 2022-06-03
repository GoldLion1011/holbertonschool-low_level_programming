#include "main.h"

/**
  * *_strcpy - copies a pointed to string
  * @src: pointer to array to be copied
  * @dest: destination that src is copied to
  * Return: the pointer to dest (success)
  */

char *_strcpy(char *dest, char *src)
{
	char *copier = src;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *copier;	
	return (dest);
}	
