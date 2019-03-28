#include "holberton.h"
/**
  * print_binary2 - prints diffent from 0
  * @y:  number to print in binary
  * Return: no return
**/
void print_binary2(unsigned long int y)
{
	if (y == 0)
	{
	}
	else
	{
		print_binary2(y >>  1);
		_putchar((y & 1) + '0');
	}
}
/**
 * print_binary - prints the binary representation of a number
 * @n: input integer
 * Return: No return.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	_putchar('0');
	else
	{
	print_binary2(n);
	}
}
