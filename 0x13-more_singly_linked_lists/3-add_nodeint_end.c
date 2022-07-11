#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds new node to the end of listint_t list
  * @head: double pointer to beginning of list_t list
  * @n: int to be added to end of list
  *
  * Return: address of new element, or NULL if fails
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (new);
}
