#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to be checked
 * @key: key to look for
 *
 * Return: value associated with the element, NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int j = 0;
	hash_node_t *temp = NULL;

	if (key == NULL)
		return (NULL);

	if (ht != NULL)
	{
		j = key_index((const unsigned char *)key, ht->size);
		temp = ht->array[j];

		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
