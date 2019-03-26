#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: address new head
 * @index: index to insert the node.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *aux2, *aux3;
	unsigned int i = 0;

	aux = *head;
	while (index && i < index - 1)
	{
		if (aux)
		aux = aux->next;
		else
		{
		return (-1);
		}
		i++;
	}
	if (!index && *head)
	{
	*head = aux->next;
	free(aux);
	return (1);
	}
	if (aux && aux->next)
	{
	aux2 = aux;
	aux3 = aux2->next;
	aux->next = aux3->next;
	free(aux3);
	return (1);
	}
	return (-1);
}

