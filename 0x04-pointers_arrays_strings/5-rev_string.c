#include "holberton.h"
/**
  * rev_string - prints string
  * @s: input string
  * Return: no return
**/
void rev_string(char *s)
{
int i = 0, j = 0;
char aux;
while (s[i] != '\0')
{
i++;
}
while (i > 0)
{
for (j = 0; j < (i - 1); j++)
{
aux = s[j + 1];
s[j + 1] =  s[j];
s[j] = aux;
}
i--;
}
}
