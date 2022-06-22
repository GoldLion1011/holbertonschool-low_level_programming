#ifndef HEADER_FILE
#define HEADER_FILE dog.h

/**
  * dog - struct with elements name, age, and owner
  * @name: doggo's name
  * @age: doggo's age
  * @owner: hoomans' name
  *
  * Description: longer description
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
