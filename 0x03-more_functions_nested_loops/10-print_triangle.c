#include "holberton.h"
/**
  * print_triangle - prints a triangle
  * @size: size of the triangle
  * Return: no return
**/
void print_triangle(int size)
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
		if ((i + c) < (size - 1))
		{
		_putchar(' ');
		}
		else
		{
		_putchar(35);
		}
		}
		_putchar('\n');
	}
	}
}

