#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
  *
  */

int *array_range(int min, int max)
{
	int *array;
	int c;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1)) * sizeof(*array);

	if (array == NULL)
		return (NULL);

	for (c = 0; min <= max; c++, min ++)
		array[c] = min;

	return (array);
}
