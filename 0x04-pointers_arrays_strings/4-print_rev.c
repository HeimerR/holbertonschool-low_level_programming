#include "holberton.h"
/**
  * print_rev - prints string
  * @s: input string
  * Return: no return
**/
void print_rev(char *s)
{
	int counter = 0;  
	while (*s != '\0')
	{
		s++;
		counter++;
	}
	while (counter > 0)
	{
		s--;
		_putchar(*s);
		counter--;
	}
	_putchar('\n');
}
