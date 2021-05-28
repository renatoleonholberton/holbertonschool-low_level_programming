#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of 'size' size
 * @size: Size of the newly ceated hash table
 *
 * Return: Pointer to newly allocated memory
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(*ht));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(*(ht->array)) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		(ht->array)[i] = NULL;

	return (ht);
}
