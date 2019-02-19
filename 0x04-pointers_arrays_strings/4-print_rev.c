#include "holberton.h"
/**
  * print_rev - prints string
  * @s: input string
  * Return: no return
**/
void print_rev(char *s)
{
int i, j = 0;
while (s[i] != '\0')
{
i++;
}
for (j = i; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
