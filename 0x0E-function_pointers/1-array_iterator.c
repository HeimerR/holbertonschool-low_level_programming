#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter
* on each element of array.
* @array: input array
* @size: array size
* @action: input function
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action && array)
	{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
