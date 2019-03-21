#include "lists.h"
/**
 * print_list - prints linked lists
 * @h: list head
 * Return: length
 */
size_t list_len(const list_t *h)
{
	int length = 0;

	if (h)
	{
		while (h)
		{
			length++;
			h = h->next;
		}
	}
	return (length);
}
