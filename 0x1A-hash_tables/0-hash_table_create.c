#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table
 * @size: size of array
 *
 * Return: pointer to the newly created hash table
 *         NULL if fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_mesa;
	unsigned int j;

	new_mesa = malloc(sizeof(hash_table_t));
	if (new_mesa == NULL)
		return (NULL);

	new_mesa->size = size;
	new_mesa->array = malloc(sizeof(hash_table_t) * size);
	if (new_mesa->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		new_mesa->array[j] = NULL;

	return (new_mesa);
}
