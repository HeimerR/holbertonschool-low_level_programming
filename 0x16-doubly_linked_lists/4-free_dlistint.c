#include "lists.h"
/**
* free_dlistint - frees a doubly linked list
* @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
