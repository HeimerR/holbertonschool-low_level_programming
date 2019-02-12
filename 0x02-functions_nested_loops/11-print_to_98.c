#include "holberton.h"
#include <stdio.h>
/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: input , start point, integer
  * Return: no return
**/
void print_to_98(int n)
{
int num;

	if (n < 98)
	{
		for (num = n; num < 98; num++)
		{
		printf("%d,  ", num);
		}
	}
	if (n > 98)
	{
		for (num = n; num > 98; num--)
		{
		printf("%d, ", num);
		}
	}
	printf("98\n");
}
