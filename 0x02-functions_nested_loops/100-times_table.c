#include "holberton.h"
/**
  * print_times_table - prints the times table givena number
  * @n: input number
  * Return: no return
**/
void print_times_table(int n)
{
int n1;
int n2;
int digit;
int digit2;
if (n <= 15 && n > 0)
{
	for (n1 = 0 ; n1 <= n; n1++)
	{
		for (n2 = 0; n2 <= n; n2++)
		{
		digit = n1 * n2;
		digit2 = (n2 + 1) * n1;
		if (digit < 10)
		{ _putchar(digit + '0'); }
		else if (digit > 9 && digit < 100)
		{ _putchar(digit / 10 + '0');
		_putchar(digit % 10 + '0'); }
		else
		{ _putchar(digit / 100 + '0');
		_putchar(((digit / 10) % 10) + '0');
		_putchar(digit % 10 + '0'); }
		if (n2 == n)
		{ _putchar('\n'); }
		else
		{ _putchar(',');
		_putchar(' ');
		if (digit2 <= 9)
		{ _putchar(' ');
		_putchar(' '); }
		else if (digit2 <= 99)
		{ _putchar(' '); }
		}
		}
	}
}
}
