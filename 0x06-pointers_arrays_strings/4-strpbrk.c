#include "holberton.h"
/**
* _strpbrk - gets the length of a prefix substring.
* @s: input array
* @accept: bytes to accept
* Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
int i, j = 0;
char *aux;
aux = s;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (aux);
}
}
aux++;
}
return (0);
}
