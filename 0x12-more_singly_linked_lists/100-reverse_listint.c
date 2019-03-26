#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head address.
 * Return:  a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *aux2;

	if (*head)
	{
	aux = *head;
	aux2 = (*head)->next;
	*head = (*head)->next;

	aux->next = NULL;

	while (*head)
	{
		*head = (*head)->next;
		aux2->next = aux;
		aux = aux2;
		aux2 = *head;
	}
	*head = aux;
	}
	return (*head);
}

