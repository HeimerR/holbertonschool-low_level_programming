#include "holberton.h"
/**
  * _puts_recursion - prints a string, followed by a new line.
  * @s: input char
  *
  *
**/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
{
_putchar('\n');
}
}

