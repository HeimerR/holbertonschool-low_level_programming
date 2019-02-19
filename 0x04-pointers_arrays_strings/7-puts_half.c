#include "holberton.h"
/**
  * puts_half - prints one char out of 2
  * @str: input string
  * Return: no return
**/
void puts_half(char *str)
{
int i = 0, n, j = 0;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
{
n = (i - 1) / 2;
}
else
{
n = i / 2;
}
while (j < n)
{
_putchar(str[j + n]);
j++;
}
_putchar('\n');
}
