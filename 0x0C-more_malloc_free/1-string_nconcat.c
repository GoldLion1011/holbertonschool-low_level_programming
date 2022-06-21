#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: numbers of chars to concatenate
  * Return: pointer to new string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a = NULL;
	unsigned int h, i, j, k;
	char *junk;

	junk = malloc(5);
	free(junk);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	h = 0;
	if (s1)
	{
		for (h = 0; s1[h] != '\0'; h++)
			;
	}
	i = 0;
	if (s2)
	{
		for (i = 0; s2[i] != '\0'; i++)
			;
	}
	if (n < i)
	{
		i = n;
	}
	a = malloc(h + i + 1);
	if (a)
	{
		for (j = 0; (j < h) && s1; j++)
		{
			a[j] = s1[j];
		}
		for (k = 0; (k < i) && s2; k++)
		{
			a[j + 1] = s2[k];
		}
		a[j + 1] = '\0';
	}
	return (a);
}
