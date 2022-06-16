#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: width of 2D array
  * @height: height of 2D array
  *
  * Return: NULL if width <= 0, height <= 0, or function fails
  *         pointer to the 2D array of integers
  */

int **alloc_grid(int width, int height)
{
	int **twod;
	int ht_index, wd_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twod = malloc(sizeof(int *) * height);

	if (twod == NULL)
		return (NULL);

	for (ht_index = 0; ht_index < height; ht_index++)
	{
		twod[ht_index] = malloc(sizeof(int) * width);

		if (twod[ht_index] == NULL)
		{
			for (; ht_index >= 0; ht_index--)
				free(twod[ht_index]);

			free(twod);
			return (NULL);
		}
	}

	for (ht_index = 0; ht_index < height; ht_index++)
	{
		for (wd_index = 0; wd_index < width; wd_index++)
			twod[ht_index][wd_index] = 0;
	}
	return (twod);
}
