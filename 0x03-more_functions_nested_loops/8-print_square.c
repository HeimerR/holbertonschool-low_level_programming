#include "holberton.h"
/**
  * print_square - prints a diagonal
  * @size: size of square
  * Return: no return
**/
void print_square(int size)
{
	int i, c;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		for (c = 0; c < size; c++)
		{
		_putchar(35);
		}
	_putchar('\n');
	}
	}
}
