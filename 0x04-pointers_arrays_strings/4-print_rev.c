#include "holberton.h"
/**
  * print_rev - prints string
  * @s: input string
  * Return: no return
**/
void print_rev(char *s)
{
char *n;
n = s;
while (*s != '\0')
{
s++;
}
while (s > n)
{
_putchar(*s);
s--;
}
_putchar(*s);
_putchar('\n');
}
