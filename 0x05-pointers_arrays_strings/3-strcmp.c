#include "holberton.h"
/**
  * _strcmp - appends the src string to the dest string
  * @s1: destination char
  * @s2: source char
  * Return: comparison
 **/
int _strcmp(char *s1, char *s2)
{
	int num = 0, i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	num = s1[i] - s2[i];
	return (num);
	}
	i++;
	}
return (num);
}
