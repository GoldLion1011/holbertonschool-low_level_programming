#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all elements of list_t
  * @h: singly linked list to be printed
  *
  * Return: number of elements in list
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
