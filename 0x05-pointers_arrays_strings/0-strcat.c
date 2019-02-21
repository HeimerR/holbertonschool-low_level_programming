#include "holberton.h"
/**
  * _strcat -  appends the src string to the dest string
  * @dest: destination char
  * @src: source char
  * Return: destination
 **/
char *_strcat(char *dest, char *src)
{
	int sizedest;
	int sizesrc;
	int i;

	for (sizedest = 0; dest[sizedest] != '\0'; sizedest++)
	{
	}
	for (sizesrc = 0; src[sizesrc] != '\0'; sizesrc++)
	{
	}
	for (i = 0; i < sizesrc; i++)
	{
	dest[i + sizedest]  = src[i];
	}
return (dest);
}
