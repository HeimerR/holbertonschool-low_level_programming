#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  first index where value is located otherwise -1
 *
**/
int jump_search(int *array, size_t size, int value)
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
