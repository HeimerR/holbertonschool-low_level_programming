#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - concatenates two strings
*
* @width: width array
* @height: height array
* Return: pointer to 2D array
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width > 0 && height > 0)
	{
		p = (int **)malloc(sizeof(int *) * height);
		if (p == NULL)
		return (0);
		for (i = 0; i <  height; i++)
		{
			p[i] = (int *)malloc((width) * sizeof(int));
			if (p[i] == NULL)
			return (0);
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
		}
	return (p);
	}
return (0);
}
