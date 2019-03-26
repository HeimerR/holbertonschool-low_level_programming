#include "lists.h"
/**
 * add_nodeint_end - adds new nodes to list
 * @head: address new head
 * @n: number to add
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *aux;

	aux = *head;
	new_node = malloc(sizeof(listint_t));
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
	}
	else
	{
		aux->next = new_node;
	}
	return (new_node);
}
