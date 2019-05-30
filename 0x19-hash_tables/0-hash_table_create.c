#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: hash table pointer
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	hash_node_t **array;
	unsigned long int i;

	array = malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	h_table = malloc(sizeof(hash_table_t));
	h_table->array = array;
	h_table->size = size;
	return (h_table);
}

