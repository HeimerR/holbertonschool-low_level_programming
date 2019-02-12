#include "holberton.h"
#include <stdio.h>
/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: input , start point, integer
  * Return: no return
**/
void print_to_98(int n)
{
int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
		printf("%d,  ", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
		printf("%d, ", i);
		}
	}
	printf("98\n");
}
