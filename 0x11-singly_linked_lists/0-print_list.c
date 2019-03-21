#include "lists.h"
/**
 * print_list - prints linked lists
 * @h: list head
 * Return: length
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	if (h)
	{
		while (h)
		{
			if (h->str == NULL)
				printf("[0] %p\n", h->str);
			else
				printf("[%d] %s\n", h->len, h->str);
			length++;
			h = h->next;
		}
	}
	return (length);
}
