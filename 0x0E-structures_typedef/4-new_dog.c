#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/*
  * _strlen - gives the length of a string
  * @s: this is the given string to count
  * Return: length of string
  */

int _strlen(char *s)
{
	int length = 0;

	while
(s[length] != '\0') length++;
	return (length);
}

/**
  * _strcpy - copies a pointed to string
  * @src: pointer to array to be copied
  * @dest: destination that src is copied to
  * Return: the pointer to dest (success)
  */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c++] = '\0';
	return (dest);
}

/**
  * new_dog - you're getting another dog!
  * @name: names the dog
  * @age: age of new pupper
  * @owner: lucky pet parent
  * Return: new struct dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pepper;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	pepper = malloc(sizeof(dog_t));
	if (pepper == NULL)
		return (NULL);

	pepper->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (pepper->name == NULL)
	{
		free(pepper);
		return (NULL);
	}

	pepper->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (pepper->owner == NULL)
	{
		free(pepper->name);
		free(pepper);
		return (NULL);
	}

	pepper->name = _strcpy(pepper->name, name);
	pepper->age = age;
	pepper->owner = _strcpy(pepper->owner, owner);

	return (pepper);
}
