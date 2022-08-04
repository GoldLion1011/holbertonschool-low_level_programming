#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted 
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *temp = NULL, *next_temp = NULL;

	if (ht == NULL)
		return;

	while (j < ht->size)
	{
		next_temp = ht->array[j];
		while (temp)
		{
			temp = next_temp;
			next_temp = next_temp->next;
			if (temp->key != NULL)
				free(temp->key);
			if (temp->value != NULL)
				free(temp->value);
			free(temp);
		}
		free(ht->array[j]);
		j++;
	}
	free(ht->array);
	free(ht);
}
