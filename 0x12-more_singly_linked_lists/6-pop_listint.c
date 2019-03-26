#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: address new head
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n = 0;

	if (head)
	{
		aux = *head;
		if (aux)
		{
			*head = aux->next;
			n = aux->n;
			free(aux);
		}
	}
	return (n);
}
