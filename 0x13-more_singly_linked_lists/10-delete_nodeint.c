#include "lists.h"
#include <stdlib.h>

/**
  * delete_nodeint_at_index - deletes the node at index index
  * @head: double pointer to first node in list
  * @index: index of node to delete
  *
  * Return: pointer to indexed node
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;

	for (a = 0; a < index - 1; a++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
