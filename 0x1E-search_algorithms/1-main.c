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
		2, 5, 9, 10, 15, 25, 50, 99, 150, 200, 201, 202, 203, 204, 205, 206, 207, 208, 500, 600, 1000
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 204, binary_search(array, size, 204));
	printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
	printf("Found %d at index: %d\n\n", 999, binary_search(array, size, 999));
	printf("Found %d at index: %d\n\n", 10000, binary_search(array, size, 10000));
	printf("Found %d at index: %d\n\n", 4, binary_search(array, 5, 4));
	printf("Found %d at index: %d\n", 4, binary_search(array, size, 4));
	printf("Found %d at index: %d\n", 4, binary_search(NULL, size, 4));
	return (EXIT_SUCCESS);
}
