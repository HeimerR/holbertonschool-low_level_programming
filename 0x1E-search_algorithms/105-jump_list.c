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
listint_t *jump_list(listint_t *list, size_t size, int value);
{
	size_t leap, i = 0, j;

	if (!array)
		return (-1);
	leap = sqrt(size);
	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += leap;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - leap, i);
	j = i - leap;
	while (j <= i && j < size)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);

}
