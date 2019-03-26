#include "lists.h"
/**
 * add_nodeint - adds new nodes to list
 * @head: address new head
 * @n: number to add
 * Return: head
 */
listint_t *add_nodeaddr(listint_addr **head, listint_t *address)
{
	listint_addr *new_node;

	new_node = malloc(sizeof(listint_addr));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (0);
	}
	new_node->address = address;
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
	typedef struct listint_address
	{
	struct listint_s *address;
	struct listint_address *next;
	} listint_addr;
	size_t n = 0;
	listint_addr *addrs;

	addrs = NULL;
	add_nodeaddr(&addrs, head);
	while (head)
	{
		while(addrs)
		{
		if (addrs->address == head->next)	
			

		
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
		}
	}
	
return (n);
}
