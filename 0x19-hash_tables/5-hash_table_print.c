#include "hash_tables.h"
/**
  * hash_table_print -  prints a hash table.
  * @ht: hast table
  * Return: no return
  *
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *aux;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			aux = ht->array[i];
			while (aux != NULL)
			{
				if (flag == 0)
				{
					printf("\'%s\': \'%s\'", aux->key, aux->value);
					flag = 1;
				}
				else
					printf(", \'%s\': \'%s\'", aux->key, aux->value);
				aux = aux->next;
			}
		}
		printf("}\n");
	}
}
