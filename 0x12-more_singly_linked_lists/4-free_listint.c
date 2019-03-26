#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}

}
