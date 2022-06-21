#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array of nmemb elements of
  *           size bytes each and returns a pointer to the allocated memory
  * @nmemb: number of elements
  * @size: byte size of each array element
  *
  * Return: NULL if nmemb = 0, size = 0, or function fails
  *         pointer to allocated memory otherwise
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fluff;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	fluff = mem;

	for (index = 0; index < (size * nmemb); index++)
		fluff[index] = '\0';

	return (mem);
}
