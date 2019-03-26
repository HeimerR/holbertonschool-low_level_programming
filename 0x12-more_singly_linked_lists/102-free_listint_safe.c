#include "lists.h"
/**
 * free_list3 - frees a list
 * @head: head of the list
 */
void free_list3(listint_addr *head)
{
	listint_addr *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}

}
/**
 * add_nodeaddr2 - adds new nodes to list
 * @head: address new head
 * @addr: address to store
 * Return: head
 */
listint_addr *add_nodeaddr2(listint_addr **head, const listint_t *addr)
{
	listint_addr *new_node;

	new_node = malloc(sizeof(listint_addr));
	if (new_node == NULL)
	{
		printf("Error\n");
		free_list3(*head);
		return (0);
	}
	new_node->address = addr;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
/**
 * free_listint_safe - frees lists with loops
 * @h: address pointer head
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listint_addr *addrs, *aux;
	listint_t *aux2, *aux3;

	if (h)
	{
		addrs = NULL;
		aux3 = *h;
		while (aux3)
		{
			aux = addrs;
			while (addrs)
			{
				if (addrs->address == aux3)
				{
					free_list3(aux);
					*h = NULL;
					return (n);
				}
				addrs = addrs->next;
			}
			addrs = aux;
			aux2 = aux3->next;
			add_nodeaddr2(&addrs, aux3);
			free(aux3);
			aux3 = aux2;
			n++;
		}
	free_list3(addrs);
	*h = NULL;
	}
return (n);
}
