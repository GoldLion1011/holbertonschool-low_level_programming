#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *temp;
	char flag = 0; /* its 0 bc no data has been printed yet */

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		temp = ht->array[j];
		while (temp != NULL)
		{
			if (flag == 1)
				printf(", "); 
			printf("'%s' : '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
