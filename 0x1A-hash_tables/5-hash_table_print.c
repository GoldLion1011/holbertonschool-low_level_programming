#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table
 * @ht: hash table to print
 *
 * Return: dictionary format of a hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (j < ht->size)
	{
		temp = ht->array[j];
		while (temp)
		{
			printf("'%s' : '%s'", temp->key, temp->value);
			if (ht->array[j + 1] == NULL)
				break;
			printf(", ");
			temp = temp->next;
		}
		j++;
	}
	printf("}\n");
}
