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
		0, 1, 5, 5, 5, 5, 5, 7, 8, 8, 9, 10, 12, 20, 25, 25, 30, 31, 32 ,32
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
	printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
	printf("Found %d at index: %d\n\n", 999, advanced_binary(array, size, 999));
	printf("Found %d at index: %d\n\n", 9, advanced_binary(array, size, 9));
	printf("Found %d at index: %d\n\n", 12, advanced_binary(array, size, 12));
	printf("Found %d at index: %d\n\n", 25, advanced_binary(array, size, 25));
	printf("Found %d at index: %d\n\n", 30, advanced_binary(array, size, 30));
	printf("Found %d at index: %d\n\n", 32, advanced_binary(array, size, 32));
	printf("Found %d at index: %d\n\n", 0, advanced_binary(array, size, 0));
	printf("Found %d at index: %d\n\n", 3, advanced_binary(array, size, 3));
	printf("Found %d at index: %d\n\n", 11, advanced_binary(array, size, 11));
	printf("Found %d at index: %d\n\n", 29, advanced_binary(array, size, 29));
	return (EXIT_SUCCESS);
}
