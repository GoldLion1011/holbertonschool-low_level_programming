#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
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
