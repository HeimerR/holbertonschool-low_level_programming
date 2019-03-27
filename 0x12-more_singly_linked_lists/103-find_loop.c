#include "lists.h"
/**
 * locateloop - check the code for Holberton School students.
 * @pslow: pointer one by one
 * @pfast: pointer leap one
 * Return: poibter where the loop start
 */
listint_t *locateloop(listint_t *pslow, listint_t *pfast)
{
	while (pslow != pfast)
	{
	pslow = pslow->next;
	pfast = pfast->next;
	}
return (pslow);
}
/**
 * find_listint_loop - finds loops inside lists
 * @head: address pointer head
 * Return: number of nodes
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pslow, *pfast;

	if (head)
	{
		pslow = head->next;
		pfast = head->next->next;
		while (pslow && pfast)
		{
			if (pslow == pfast)
			{
				pslow = head;
				return (locateloop(pslow, pfast));
			}
		pslow = pslow->next;
		pfast = pfast->next->next;
		}
	}
return (0);
}
