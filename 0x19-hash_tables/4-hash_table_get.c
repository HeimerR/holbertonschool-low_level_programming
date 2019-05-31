#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table
* @key: key to search
* Return: value
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *aux;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux)
			{
				if (strcmp(aux->key, key) == 0)
					return (aux->value);
				aux = aux->next;
			}
			i++;
		}
	}
	return (NULL);
}
