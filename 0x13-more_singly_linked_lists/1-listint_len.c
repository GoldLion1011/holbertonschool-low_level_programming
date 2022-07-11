#include "lists.h"

/**
  * listint_len - finds number of elements in listint_t linked list
  * @h: pointer to linked list
  *
  * Return: number of elements in listint_t linked list
  */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
