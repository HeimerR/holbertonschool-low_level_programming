#include "lists.h"
/**
 * sum_listint - deletes the head node
 * @head: address new head
 * Return: head node’s data (n).
 */
int sum_listint(listint_t *head)
{
	listint_t *aux;
	unsigned int n = 0;

	aux = head;
	while (aux)
	{
	n += aux->n;
	aux = aux->next;
	}
	return (n);
}

