#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: input array
* @accept: bytes to accept
* Return: # of bytes the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
int j, i = 0;
unsigned int count = 0;
char *aux;
aux = accept;
while (aux[i] != '\0')
{
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == aux[i])
{
count++;
aux++;
i = -1;
break;
}
}
i++;
}
return (count + 1);
}
