#include "holberton.h"
/**
  * print_number - prints numbers
  * @n: input number
  * Return: no return
**/
void print_number(int n)
{
	
	if (n < 0)
	{_putchar('-'); 
	n = -n;
	}
	if(n < 10)
	{ _putchar(n + '0'); }
  	if(n < 100 && n > 9)
	{ _putchar(n/10 + '0' );
	_putchar(n%10 + '0' ); }
	if(n < 1000 && n > 99)
	{ _putchar( n / 100 + '0' );
	_putchar((n / 10) % 10 + '0');
	_putchar(n % 10 + '0'); } 
	if(n < 10000 && n > 999)
	{ _putchar(n / 1000 + '0');
	 _putchar((n / 100) % 10 + '0');
	 _putchar((n % 100) / 10 + '0');
	 _putchar(n % 10 + '0'); }
	if(n < 100000 && n > 9999)
 	{ _putchar(n / 10000 + '0');
	_putchar((n / 1000) % 10 + '0');
	_putchar((n / 100) % 10 + '0');
	_putchar((n % 100) / 10 + '0');
	_putchar(n % 10 + '0'); }
}

