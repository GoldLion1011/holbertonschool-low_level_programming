#include "main.h"

/**
  * _memcpy - copies n bytes from src to dest
  * @dest: bytes copied to here
  * @src: where bytes are copied from
  * @n: number of bytes from memory area to be copied
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *src_char = (char *)src;

	char *dest_char = (char *)dest;

	for (i = 0; i < n; i++)
		dest_char[i] = src_char[i];

	return (dest);
}
