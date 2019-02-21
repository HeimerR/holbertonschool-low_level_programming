#include "holberton.h"
/**
  * _strncpy -  appends the src string to the dest string
  * @dest: destination char
  * @src: source char
  * @n: lenght
  * Return: destination
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int sizedest;
	int sizesrc;
	int i = 0;

	for (sizedest = 0; dest[sizedest] != '\0'; sizedest++)
	{
	}
	for (sizesrc = 0; src[sizesrc] != '\0'; sizesrc++)
	{
	}
	while (i < n && i < sizesrc)
	{
	dest[i] = src[i];
	i++;
	}
	if (n > sizesrc)
	{
	while (i < sizedest && i < n)
	{
	dest[i] = '\0';
	i++;
	}
	}
return (dest);
}
