#include "holberton.h"
/**
  *  more_numbers  - prints 10 time numbers 0-9
  * Return: no return
**/
void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
		if (n > 9)
		{
		_putchar(n / 10 + '0');
		}
		_putchar(n % 10 + '0');
		}
	_putchar('\n');
	}
}

