#include "holberton.h"
/**
  * print_alphabet_x10 - prints alphabet lower cases
  *
  * Return: no return
**/
void print_alphabet_x10(void)
{
char letter;
int n;
	for (n = 0; n <= 9; n++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
		_putchar('\n');
		}
}
