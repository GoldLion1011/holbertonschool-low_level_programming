#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *
  *
  *
  *
  *
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = NULL;
	char *c_name = NULL, *c_owner = NULL;
	int d = 0, i = 0, g = 0;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	while (name[d] != '\0')
		d++;
	while (owner[i] != '\0')
		i++;

	c_name = malloc(d + 1);
	if (c_name)
	{
		for (; g <= d; g++)
			c_name[g] = name[g];
	}
	else
	{
		free(dog);
		return (NULL);
	}

	c_owner = malloc(i + 1);
	if (c_owner)
	{
		for (g = 0; g <= i; g++)
			c_owner[g] = owner[g];
	}
	else
	{
		free(dog);
		free(c_name);
		return (NULL);
	}

	dog->name = c_name;
	dog->age = age;
	dog->owner = c_owner;
	return (dog);
} 	
