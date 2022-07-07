#include "lists.h"
#include <string.h>

/**
  *
  *
  *
  *
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;
	char *h;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	h = strdup(str);
	if (h == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = h;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
