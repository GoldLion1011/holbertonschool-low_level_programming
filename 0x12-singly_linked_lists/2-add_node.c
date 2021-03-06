#include "lists.h"
#include <string.h>

/**
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
  * add_node - adds a node to beginning of list_t
  * @head: double pointer to list_t list
  * @str: new string to add into the node
  *
  * Return: address of new element, or NULL if fails
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
