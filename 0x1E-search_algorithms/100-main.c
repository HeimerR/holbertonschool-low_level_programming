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
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 30, 45, 53, 61, 62, 76, 99, 200, 1000
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 0, jump_search(array, size, 0));
	printf("Found %d at index: %d\n\n", 1000, jump_search(array, size, 1000));
	printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
	return (EXIT_SUCCESS);
}
