#include "lists.h"
/**
 * free_list2 - frees a list
 * @head: head of the list
 */
void free_list2(listint_addr *head)
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
 * add_nodeaddr - adds new nodes to list
 * @head: address new head
 * @addr: address to store
 * Return: head
 */
listint_addr *add_nodeaddr(listint_addr **head, const listint_t *addr)
{
	listint_addr *new_node;

	new_node = malloc(sizeof(listint_addr));
	if (new_node == NULL)
	{
		printf("Error\n");
		free_list2(*head);
		exit(98);
	}
	new_node->address = addr;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
/**
 * print_listint_safe - prints lists with loops
 * @head: address pointer head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listint_addr *addrs, *aux;

	addrs = NULL;
	while (head)
	{
		aux = addrs;
		while (addrs)
		{
			if (addrs->address == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list2(aux);
				return (n);
			}
			addrs = addrs->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		addrs = aux;
		add_nodeaddr(&addrs, head);
		head = head->next;
		n++;
	}
free_list2(addrs);
return (n);
}
