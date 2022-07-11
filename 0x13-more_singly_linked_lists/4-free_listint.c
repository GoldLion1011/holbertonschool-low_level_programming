#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees listint_t list
  * @head: pointer to top og the list
  */

void free_listint(listint_t *head)
{
	listint_t *bird;

	while (head != NULL)
	{
		bird = head->next;
		free(head);
		head = bird;
	}
}
