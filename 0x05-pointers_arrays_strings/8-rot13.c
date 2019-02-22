#include "holberton.h"
/**
  * rot13 - encodes a string into rot13
  * @n: string
  * Return: string encoded
 **/
char *rot13(char *n)
{
	int j, aux = 0, i = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (n[i] != '\0')
	{
	aux = 0;
		for (j = 0; (j < 52) && aux == 0; j++)
		{
		if ((n[i] == in[j]) && aux == 0)
			{
			n[i] = out[j];
			aux = 1;
			}
		}
	i++;
	}
return (n);
}
