#include "lists.h"
/**
 * free_list - fress linked lists
 * @head: head of the list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *aux;
	list_t *aux2;

	aux = head;
	while (aux)
	{
	aux2 = aux;
	free(aux->str);
	free(aux);
	aux = aux2->next;
	}
}
