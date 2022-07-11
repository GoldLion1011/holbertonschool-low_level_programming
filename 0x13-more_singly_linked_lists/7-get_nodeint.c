#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: pointer to first node in linked list
  * @index: index of node to be returned
  *
  * Return: pointer to indexed node, NULL if node does not exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
