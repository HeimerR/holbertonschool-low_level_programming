#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array
 * of integers using the Binary search algorithm - always the first one
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  index where value is located otherwise -1
 *
 **/
int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 1, j, offset = 0;
	int tmp;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: %d", array[0]);
	while (i < size)
		printf(", %d", array[i++]);
	printf("\n");
	if (size == 1 && array[0] != value)
		return (-1);
	j = (size - 1) / 2;
	if (array[j] == value)
	{
		if (j == 0 || (array[j - 1] < value))
			return (j);
	}
	if (array[j] < value)
	{
		offset += j + 1;
		array += j + 1;
		if (size % 2 != 0)
			j--;
	}
	j++;
	tmp = advanced_binary(array, j, value);
	if (tmp != -1)
		return (tmp + offset);
	return (-1);
}
