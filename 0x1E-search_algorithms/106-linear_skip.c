#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: head list pointer
 * @value: value to search
 *
 * Return: pointer to the value or NULL
**/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *skip, *skip_prev;

	if (!list)
		return (NULL);
	skip = list->express;
	skip_prev = list;
	while (skip)
	{
		printf("Value checked at index [%lu] = [%d]\n", skip->index, skip->n);
		if (skip->n >= value || !skip->express)
		{
			if (!skip->express && skip->n < value)
			{
				skip_prev = skip;
				while (skip->next)
					skip = skip->next;
			}
			printf("Value found between indexes [%lu] and [%lu]\n",
					skip_prev->index, skip->index);
			while (skip_prev)
			{
				printf("Value checked at index [%lu] = [%d]\n",
						skip_prev->index, skip_prev->n);
				if (skip_prev->n == value)
					return (skip_prev);
				if (skip_prev->n > value)
					return (NULL);
				skip_prev = skip_prev->next;
			}
			break;
		}
		skip_prev = skip;
		skip = skip->express;
	}
	return (NULL);
}
