#include "holberton.h"
/**
  * _strcpy - copies the string pointed to
  * @dest: destination array
  * @src: input string
  * Return: string
**/
char *_strcpy(char *dest, char *src)
{
int i, length = 0;
while (*src != '\0')
{
src++;
length++;
}
for (i = 0; i < length; i++)
{
src--;
}
for (i = 0; i < length && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < length; i++)
{
dest[i] = '\0';
}
return (dest);
}
