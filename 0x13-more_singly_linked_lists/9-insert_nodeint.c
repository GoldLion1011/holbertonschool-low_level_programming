#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: double pointer to first node in list
  * @idx: index of the list where the new node should be added
  * @n: value of new node
  *
  * Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *current, *new;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		current = *head;
		for (a = 0; a < idx - 1 && current != NULL; a++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
