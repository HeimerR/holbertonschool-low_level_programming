#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - xcreates an array of chars
* @size: size of the array
* @c: contant to initialize
*
* Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	return (0);
	p = malloc((size) * sizeof(char));
	if (p == '\0')
	return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
return (p);
}

