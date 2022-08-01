#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  * @head: pointer to dll
  * @index: index of node to return
  *
  * Return: address of node, NULL if it does not exist
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (!head)
		return (NULL);

	while (head && j < index)
	{
		head = head->next;
		j++;
	}

	return (head ? head : NULL);
}
