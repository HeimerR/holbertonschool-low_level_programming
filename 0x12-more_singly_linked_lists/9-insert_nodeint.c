#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: address new head
 * @idx: index to insert the node.
 * @n: value to insert
 * Return: head node’s data (n).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		printf("Error\n");
		return (0);
	}
	new_node->n = n;
	aux = *head;
	while (idx && i < idx - 1)
	{
		if (aux)
		aux = aux->next;
		else
		return (NULL);
		i++;
	}
	if (!idx && !*head)
	{
	new_node->next = NULL;
	}
	if (!idx)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}

