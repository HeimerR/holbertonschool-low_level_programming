#include "holberton.h"
/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @n: size
  * Return: no return
 **/
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '0')
	{
	if (n[i] < 123 && n[i] > 96)
	{
	n[i] = (n[i] - 32);
	}
	i++;
	}
return (n);
}
