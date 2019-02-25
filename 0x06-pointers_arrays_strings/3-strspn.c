#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: input array
* @accept: bytes to accept
* Return: # of bytes the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
int j, i = 0, count = 0;
for (i = 0; s[i] != '\0'; i++)
{
	if (accept[j] == '\0')
	{ return (count); }
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{ count++;
	break;
	}
	}
}
return (count);
}
