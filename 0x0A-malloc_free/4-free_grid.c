#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - free memory
* @height: interator
* @grid: input double pointer
* Return: no return
*/

void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL && height > 0)
	{
	for (j = 0; j < height; j++)
	{
	free(grid[j]);
	}
	free(grid);
	}
}
