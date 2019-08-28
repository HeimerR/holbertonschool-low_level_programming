#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  first index where value is located otherwise -1
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high, low, offset = 0;

	if (!array)
		return (-1);
	high = size - 1;
	low = 0;
	while (size)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos + offset);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos + offset, array[pos]);
		if (array[pos] == value)
			break;
		if (array[pos] > value)
		{
			size = pos;
			high = pos - 1;
		}
		if (array[pos] < value)
		{
			array += pos + 1;
			offset += pos + 1;
			size = size - pos - 1;
		}
	}
	return (pos + offset);
}
