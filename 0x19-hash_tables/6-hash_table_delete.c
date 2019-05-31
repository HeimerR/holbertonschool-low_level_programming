#include "hash_tables.h"
/**
 * free_list - fress linked lists
 * @head: head of the list
 * Return: no return
 */
void free_list(hash_node_t *head)
{
	hash_node_t *aux;
	hash_node_t *aux2;

	aux = head;
	while (aux)
	{
	aux2 = aux->next;
	free(aux->value);
	free(aux->key);
	free(aux);
	aux = aux2;
	}
}
/**
  * hash_table_delete - frees hash table
  * @ht: hash table
  * Return: no return
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
