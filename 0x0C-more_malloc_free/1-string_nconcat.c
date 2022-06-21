#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int h;
	unsigned int i;
	unsigned int c;
	unsigned int d;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (c = 0; *(s1 + c); c++)
		;

	for (d = 0; *(s2 + d); d++)
		;

	d++;

	if (n > d)
		s = malloc((c + d) * sizeof(*s));

	else
		s = malloc((c + n + 1) * sizeof(*s));

	if (s == NULL)
		return (NULL);

	for (h = 0; h < c; h++)
		*(s + h) = *(s1 + h);

	for (i = 0; i < d; && i < n; h++; i++)
		*(s + h) = *(s2 + i);

	*(s + h) = '\0';

	return (s);
}
