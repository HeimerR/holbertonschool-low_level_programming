#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table.
* @ht: hash table pointer
* @key: key to search or store
* @value: value to store
* Return: 1 success, 0 Fail
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	unsigned long int index;
	hash_node_t *node, *aux;
	char val;

	if (key[0] == '\n')
		return (0);
	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;
	val = *value;
	aux = ht->array[index];
	while (aux && aux->key != key)
	{
		aux = aux->next;
	}
	if (aux)
		aux->value = &val;
	else
	{
	node = malloc(sizeof(hash_node_t));
	node->key = (char *)key;
	node->value = &val;
	node->next = ht->array[index];
	ht->array[index] = node;
	}
	return (1);
}
