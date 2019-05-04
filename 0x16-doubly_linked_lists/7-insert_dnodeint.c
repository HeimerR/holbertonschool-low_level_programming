#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: head of the list
  * @idx: index
  * @n: number to insert
  * Return: new node pointer
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux;
	dlistint_t *new_node;
	unsigned int i = 0;

	aux = *h;
	while (idx && i < idx - 1)
	{
		if (aux)
			aux = aux->next;
		else
			return (NULL);
		i++;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		printf("Error\n");
		return (0);
	}
	new_node->n = n;
	if (!*h)
	{
		if (!idx)
		{ new_node->next = NULL;
			new_node->prev = NULL;
			*h = new_node;
			return (new_node); }
		else
			return (NULL);
	}
	if (!idx)
	{
		return (add_dnodeint(h, n));
	}
	new_node->next = aux->next;
	if (new_node->next)
		new_node->next->prev = new_node;
	new_node->prev = aux;
	aux->next = new_node;
	return (new_node);
}
