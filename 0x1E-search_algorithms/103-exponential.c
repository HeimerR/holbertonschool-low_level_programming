#include "search_algos.h"
#include "1-binary.c"
/**
 * exponential_search -  searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  first index where value is located otherwise -1
 *
**/
int exponential_search(int *array, size_t size, int value)
{
	size_t exp = 1;
	int index;

	if (!array)
		return (-1);
	while (exp < size && array[exp] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}
	array += exp / 2;
	if (size > exp)
		size = exp - exp / 2;
	else
		size = size - exp / 2 - 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			exp / 2, exp / 2 + size);
	index = binary_search(array, size + 1, value);
	return ((index == -1) ? index : (index + (int)exp / 2));
}
