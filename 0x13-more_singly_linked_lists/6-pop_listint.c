#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: double pointer to top of the list
  *
  * Return: head node’s data (n), 0 if list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *crown;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	crown = *head;
	*head = crown->next;
	n = crown->n;
	free(crown);
	return (n);
}
