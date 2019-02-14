#include "holberton.h"
/**
  * print_diagonal - prints a diagonal
  * @n: lenght of diagonal
  * Return: no return
**/
void print_diagonal(int n)
{
	int i, c;

	if (n == 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		for (c = 0; c < n; c++)
		{
		if (i == c)
		{
		_putchar(92);
		_putchar('\n');
		}
		else if (i > c)
		{
		_putchar(' ');
		}
		}
	}
	}
}

