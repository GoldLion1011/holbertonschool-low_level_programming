#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates array of chars and initializes it
  *                with a specific char
  * @size: size of array to be initialized
  * @c: specific char to initialize the array with
  *
  * Return: NULL if size == 0 or function fails
  *         pointer to array otherwise
  */

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
