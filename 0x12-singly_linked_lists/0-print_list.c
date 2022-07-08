#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all elements of list_t
  * @h: singly linked list to be printed
  *
  * Return: number of nodes in list
  */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (nodes);
}
