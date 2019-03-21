#include "lists.h"
/**
 * list_len - prints linked lists
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
			h = h->next;
			length++;
		}
	}
	return (length);
}
