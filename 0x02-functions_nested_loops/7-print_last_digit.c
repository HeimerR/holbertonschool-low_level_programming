#include "holberton.h"
/**
  * print_last_digit - prints the last digit of a number.
  * @n: integer input
  * Return: last digit
**/
int print_last_digit(int n)
{
int d;
	if (n < 0)
	{
	n = -n;
	}
	d = n % 10;
	_putchar(d + '0');
return (d);
}
