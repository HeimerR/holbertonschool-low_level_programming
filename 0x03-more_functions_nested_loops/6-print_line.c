#include "holberton.h"
/**
  * print_line - prints a line
  * @n: lenght of line 
  * Return: no return
**/
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}

