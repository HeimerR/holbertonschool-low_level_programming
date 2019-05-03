#include "lists.h"
/**
* add_dnodeint_end - adds new nodes to a doubly linked list
* @head: address new head
* @n: number to add
* Return: head
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *aux;

	aux = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (0);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
	return (new_node);
}
