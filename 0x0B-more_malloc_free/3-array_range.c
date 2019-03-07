#include <stdlib.h>
/**
* array_range - creates an array of integers.
* @min: start value
* @max: top value
* Return: pointer to array
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	return (0);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	return (0);
	for (i = 0; i < (max - min + 1); i++)
	{
		p[i] = i + min;
	}
return (p);
}
