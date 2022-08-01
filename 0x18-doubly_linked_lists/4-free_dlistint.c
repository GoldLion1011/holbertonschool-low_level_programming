#include "lists.h"

/**
  * free_dlistint - frees a dll
  * @head: pointer to dll to free
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
