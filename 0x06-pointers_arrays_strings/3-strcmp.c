#include "holberton.h"

/**
  * _strcmp - compares 2 strings
  * @s1: string
  * @s2: another string
  * Return: some math (success)
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
