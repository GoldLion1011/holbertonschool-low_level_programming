#ifndef DOG_H
#define DOG_H

/**
  * struct dog - struct with elements name, age, and owner
  * @name: doggo's name
  * @age: doggo's age
  * @owner: hoomans' name
  *
  * Description: longer description
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
