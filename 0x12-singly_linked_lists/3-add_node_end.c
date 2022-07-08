#include "lists.h"
#include <string.h>

/**
  *
  *
  *
  *
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int len;
	char *t;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	t = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = t;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next);
		last->next = new;
	}

	return (*head);
}
