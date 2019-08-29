#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9, 10, 11, 15, 99, 100, 101, 105, 114, 125
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	//printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));
	printf("Found %d at index: %d\n\n", 999, interpolation_search(array, size, 999));
	printf("Found %d at index: %d\n\n", 10, interpolation_search(array, size, 10));
	printf("Found %d at index: %d\n\n", 15, interpolation_search(array, size, 15));
	printf("Found %d at index: %d\n\n", 100, interpolation_search(array, size, 100));
	printf("Found %d at index: %d\n\n", 101, interpolation_search(array, size, 101));
	return (EXIT_SUCCESS);
}
