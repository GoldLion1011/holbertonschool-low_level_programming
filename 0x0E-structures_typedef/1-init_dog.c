#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initializes a variable of struct type dog
  * @d: dog to be initialized
  * @name: doggo's name
  * @age: doggo's age
  * @owner: hooman's name
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
