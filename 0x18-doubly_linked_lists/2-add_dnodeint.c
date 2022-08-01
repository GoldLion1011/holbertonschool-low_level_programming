#include "lists.h"

/**
  * add_dnodeint - dds a new node at the beginning of a dlistint_t list
  * @head: double pointer to dll
  * @n: data to insert int the new node
  *
  * Return: address of new element, NULL if fail
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	return (new);
}
