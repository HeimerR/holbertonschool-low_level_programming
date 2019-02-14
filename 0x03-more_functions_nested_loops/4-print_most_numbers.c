#include "holberton.h"
/**
  * print_numbers - prints numbers 0-9 without 2,4
  * Return: no return
**/
void print_most_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
	if (n != 2 && n != 4) 
	{
	_putchar(n + '0');
	}
}
_putchar('\n');
}

