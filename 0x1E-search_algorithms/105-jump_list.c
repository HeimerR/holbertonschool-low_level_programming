#include "search_algos.h"
#include <math.h>
/**
 * jump_list - searches for a value in a sorted list of
 * integers using the Jump search algorithm
 * @list: pointer to the first element of the list to search in
 * @size: number of elements in the list
 * @value: value to search for
 * Return:  first index where value is located otherwise -1
 *
**/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t leap, i = 0, j;
	listint_t *head2, *head3;

	if (!list)
		return (NULL);
	leap = sqrt(size);
	head2 = list;

	while (i !=  size - 1)
	{
		j = 0;
		head3 = head2;
		while (j < leap && head2->next)
		{
			head2 = head2->next;
			j++;
		}
		i += j;
		printf("Value checked at index [%lu] = [%d]\n", i, head2->n);
		if (head2->n >= value)
			break;
	}
	j = i - j;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	while (j <= i && j < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", j, head3->n);
		if (head3->n == value)
			return (head3);
		head3 = head3->next;
		j++;
	}
	return (NULL);

}
