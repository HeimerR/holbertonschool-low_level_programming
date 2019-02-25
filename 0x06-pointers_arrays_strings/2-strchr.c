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
while (*f != c)
{
if (*f == 0)
return (0);
f++;
}
return (f);
}

