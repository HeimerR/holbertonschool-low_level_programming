#include "holberton.h"
/**
  * puts2 - prints one char out of 2
  * @str: input string
  * Return: no return
**/
void puts2(char *str)
{
int i, j = 0;
while (str[i] != '\0')
{
i++;
}
while (j < i)
{
_putchar(str[j]);
j = j + 2;
}
_putchar('\n');
}
