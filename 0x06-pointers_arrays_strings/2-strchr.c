#include "holberton.h"
/**
* _strchr - locates a character in a string.
* @s: input array
* @c: char to locate
* Return: pointer
*/
char *_strchr(char *s, char c)
{
char *f;
f = s;
while (*f != '\0' && *f != c)
{
f++;
}
if (*f == '\0')
{ return 0; }
else
{ return (f); }
}

