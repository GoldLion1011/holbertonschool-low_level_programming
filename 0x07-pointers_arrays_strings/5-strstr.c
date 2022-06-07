#include "main.h"

/**
  * _strstr - finds first occurrence of substring needle in string haystack,
  * terminating null bytes (\0) are not compared
  * @haystack: long string to search
  * @needle: substring to search for
  * Return: pointer to the beginning of the located substring,
  * or NULL if the substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	int h;

	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (h = 0; needle[h]; h++)
		{
			if (haystack[h] != needle[h])
				break;
		}
		if (h != s)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
