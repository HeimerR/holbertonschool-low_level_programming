#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table
 * @size: size of the array
 * Return: hash table pointer
**/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_table;
	shash_node_t **array;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	h_table = malloc(sizeof(shash_table_t));
	if (h_table == NULL)
		return (NULL);
	h_table->array = array;
	h_table->size = size;
	h_table->shead = NULL;
	h_table->stail = NULL;
	return (h_table);
}
/**
* shash_table_set - adds an element to the hash table.
* @ht: hash table pointer
* @key: key to search or store
* @value: value to store
* Return: 1 success, 0 Fail
**/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int hash;
	shash_node_t *node, *aux;
	char *val, *k;

	if (!ht)
		return (0);
	if (!key)
		return (0);
	if (!value)
		return (0);
	if (key[0] == '\0')
		return (0);
	hash = hash_djb2((unsigned char *)key);
	index = hash % ht->size;
	val = strdup(value);
	aux = ht->array[index];
	while (aux && strcmp(key, aux->key) != 0)
	{
		aux = aux->next;
	}
	if (aux)
	{
		free(aux->value);
		aux->value = val;
	}
	else
	{
	k = strdup(key);
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->key = k;
	node->value = val;
	node->next = ht->array[index];
	ht->array[index] = node;
	insert_sorted_node(node, ht);
	}
	return (1);
}
/**
 * insert_sorted_node - inserts a new node sorted
 * @ht: hash table
 * @node: new node
 * Return: no return
 */
void insert_sorted_node(shash_node_t *node, shash_table_t *ht)
{
	shash_node_t *aux;
	unsigned int i = 0;

	aux = ht->shead;
	while (aux)
	{
		if (strcmp(aux->key, node->key) < 0)
		{
			i++;
			aux = aux->snext;
		}
		else
			break;
	}
	if (!i && !ht->shead && !ht->stail)
	{ ht->shead = node;
		ht->stail = node;
		node->snext = NULL;
		node->sprev = NULL; }
	if (aux == ht->shead)
	{ node->snext = aux;
		node->sprev = NULL;
		aux->sprev = node;
		ht->shead = node; }
	if (aux && i && aux != ht->shead)
	{
		node->snext = aux;
		node->sprev = aux->sprev;
		aux->sprev->snext = node;
		aux->sprev = node;
	}
	if (!aux && i)
	{
		node->snext = NULL;
		node->sprev = ht->stail;
		ht->stail->snext = node;
		ht->stail = node;
	}
}
/**
* shash_table_get - retrieves a value associated with a key
* @ht: hash table
* @key: key to search
* Return: value
**/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *aux;

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
/**
* shash_table_print - retrieves a value associated with a key
* @ht: hash table
* Return: value
**/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *aux;
	int flag = 0;

	if (!ht)
		return;
	aux = ht->shead;
	printf("{");
	while (aux)
	{
		if (flag == 0)
		{
			printf("\'%s\': \'%s\'", aux->key, aux->value);
			flag = 1;
		}
		else
			printf(", \'%s\': \'%s\'", aux->key, aux->value);
		aux = aux->snext;
	}
	printf("}\n");
}
/**
* shash_table_print_rev - retrieves a value associated with a key
* @ht: hash table
* Return: value
**/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *aux;
	int flag = 0;

	if (!ht)
		return;
	aux = ht->stail;
	printf("{");
	while (aux)
	{
		if (flag == 0)
		{
			printf("\'%s\': \'%s\'", aux->key, aux->value);
			flag = 1;
		}
		else
			printf(", \'%s\': \'%s\'", aux->key, aux->value);
		aux = aux->sprev;
	}
	printf("}\n");
}
#include "hash_tables.h"
/**
 * free_list - fress linked lists
 * @head: head of the list
 * Return: no return
 */
void free_list(shash_node_t *head)
{
	shash_node_t *aux;
	shash_node_t *aux2;

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
  * shash_table_delete - frees hash table
  * @ht: hash table
  * Return: no return
**/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
