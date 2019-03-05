#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenates two strings
*
* @s1: input array 1
* @s2: input array 2
* Return: pointer to array
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, size1 = 0, size2 = 0;

	while (s1[size1] != '\0')
	{
	size1++;
	}
	while (s2[size2] != '\0')
	{
	size2++;
	}
	p = malloc((size1 + size2 + 1) * sizeof(char));
	if (p == NULL)
	return (0);
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (size1 + size2); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';
return (p);
}

