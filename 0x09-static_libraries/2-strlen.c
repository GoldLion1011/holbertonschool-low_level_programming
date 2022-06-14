#include "main.h"

/**
  * _strlen - gives the length of a string
  * @s: this is the given string to count
  * Return: length of string
  */

int _strlen(char *s)
{
	int length = 0;

	while
(s[length] != '\0') length++;
	return (length);
}
