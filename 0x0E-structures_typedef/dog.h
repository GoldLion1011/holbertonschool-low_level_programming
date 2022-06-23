#ifndef HEADER_FILE
#define HEADER_FILE dog.h

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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
