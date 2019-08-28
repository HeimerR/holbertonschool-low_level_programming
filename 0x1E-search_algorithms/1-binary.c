#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  index where value is located otherwise -1
 *
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 1, offset = 0, j;

	if (array == NULL)
		return (-1);
	while (size)
	{
		printf("Searching in array: %d", array[0]);
		while (i < size)
			printf(", %d", array[i++]);
		printf("\n");
		j = (size - 1) / 2;
		if (array[j] == value)
			return (j + offset);
		if (array[j] < value)
		{
			offset += j + 1;
			array += j + 1;
			if (!(size % 2))
				j++;
		}
		size = j;
		i = 1;
	}
	return (-1);
}
