#include "holberton.h"
/**
  * rev_string - prints string
  * @s: input string
  * Return: no return
**/
void rev_string(char *s)
{
int i, j = 0;
char *n;
n = s;
while (s[i] != '\0')
{
i++;
}
for (j = i; j >= 0; j--)
{
n[j] =  s[i-j];
}
s = n;
}
