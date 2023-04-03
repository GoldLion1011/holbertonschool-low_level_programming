#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer on the first node where value is located
 * If value is not present in list or if head is NULL, return NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = list, *tmp2 = list;

	if (!list)
		return (NULL);
	while (tmp->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   tmp->express->index, tmp->express->n);
		if (tmp->express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   tmp->index, tmp->express->index);
			break;
		}
		tmp = tmp->express;
	}
	if (!tmp->express)
	{
		tmp2 = tmp;
		while (tmp2->next)
			tmp2 = tmp2->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
			   tmp->index, tmp2->index);
	}
	while (tmp)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   tmp->index, tmp->n);
		if (tmp->n == value)
			return (tmp);
		if (tmp->n > value)
			return (NULL);
		tmp = tmp->next;
	}
	return (NULL);
}
