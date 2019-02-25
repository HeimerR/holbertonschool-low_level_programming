#include "holberton.h"
/**
* _memcpy -  copies memory area.
* @dest: destination array
* @src: source array
* @n: n bytes to copyl
* Return: s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

