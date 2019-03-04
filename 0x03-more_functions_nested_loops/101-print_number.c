#include "holberton.h"
#include <stdio.h>
/**
  * print_number - prints numbers
  * @n: input number
  * Return: no return
**/
void print_number(int n)
{
	unsigned int m = n, aux = n;
	int i, x, power = 1, digits2 = 1, digits = 1;

	if (n < 0)
	{ _putchar('-');
	n = -n;
	m = n;
	aux = n; }
	if (m > 0)
	{
		while (aux / 10 > 0)
		{
		aux = aux / 10;
		digits++;
		}
	}
	aux = m;
	digits2 = digits;
	for (x = 0; x < digits2; x++)
	{
	power = 1;
		for (i = digits - 1; i > 0; i--)
		{
		aux = aux / 10;
		power = power * 10;
		}
	_putchar(aux + '0');
	aux = m % power;
	digits--;
	}
}

