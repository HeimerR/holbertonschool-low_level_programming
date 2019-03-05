#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* contains a copy of the string given as a parameter.
* @str: input array
*
* Return: pointer to array
*/
char *_strdup(char *str)
{
	char *p;
	int i, size = 0;

	while (str[size] != '\0')
	{
	size++;
	}
	if (size == 0)
	return (0);
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
	return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
return (p);
}

