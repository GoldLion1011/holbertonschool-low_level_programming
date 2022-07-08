#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node_end - adds new node to the end of a singly linked list
  * @head: double pointer to list_t list
  * @str: string to be entered into new node
  *
  * Return: address of new element, or NULL if fails
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;

	return (new);
}
