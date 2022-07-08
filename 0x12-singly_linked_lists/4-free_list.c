#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a singly linked list
  * @head: list_t list to be set free
  */

void free_list(list_t *head)
{
	list_t *bird;

	while (head)
	{
		bird = head->next;
		free(head->str);
		free(head);
		head = bird;
	}
}
