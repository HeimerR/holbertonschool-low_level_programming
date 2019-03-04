#include "holberton.h"
/**
  * infinite_add - adds two numbers
  * @n1: number1
  * @n2: number2
  * @r: result
  * @size_r: size result
  * Return: r addition
**/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, a, b, c, n, aux, dec = 0;

	while (n1[i] != '\0')
	{
	i++;
	}
	while (n2[j] != '\0')
	{
	j++;
	}
	for (n = 0; n < j || n < i; n++)
	{
	a = (i - n) > 0 ? (n1[i - n - 1] - '0') : 0;
	b = (j - n) > 0 ? (n2[j - n - 1] - '0') : 0;
	c = a + b + dec;
	r[n] = (c % 10) + '0';
	dec = c > 9 ? 1 : 0;
	}
	if (dec == 1)
	{ r[n] = '1';
	r[n + 1] = '\0'; }
	else
	{ r[n] = '\0';
	n--; }
	for (i = 0; i < n + 1; i++)
	{
	for (j = 0; j < (n - i); j++)
	{
	aux = r[j + 1];
	r[j + 1] = r[j];
	r[j] = aux;
	}
	}
return (n < size_r - 1 ? r : 0);
}
