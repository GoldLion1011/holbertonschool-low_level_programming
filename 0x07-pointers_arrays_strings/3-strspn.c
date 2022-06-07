#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: segment to return bytes from
  * @accept: bytes to include in return
  * Return: number of bytes in the initial segment of s
  * consisting only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	int h = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					h++;
			}
		}
		else
			return (h);
	}
	return (h);
}
