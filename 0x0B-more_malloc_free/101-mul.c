#include <stdio.h>
#include <stdlib.h>
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

/**
 * _puts - prints string
 * @str: input string
 * Return: no return
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}

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
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements
 * @size:  size bytes
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (0);
	p = malloc(size * nmemb);
	if (p == NULL)
	return (0);
	for (i = 0; i < nmemb * size; i++)
	{
	p[i] = 48;
	}
return (p);
}
/**
 * _strcpy - copies the string pointed to
 * @dest: destination array
 * @src: input string
 * Return: string
 **/
char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	while (*src != '\0')
	{
	src++;
	length++;
	}
	for (i = 0; i < length; i++)
	{
	src--;
	}
	for (i = 0; i < length && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for ( ; i < length; i++)
	{
	dest[i] = '\0';
	}
return (dest);
}
/**
* main - multiply 2 input arguments
* @argc: number of arguments
* @argv: arguments
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	unsigned int j, count1 = 0, count2 = 0;
	int i;
	char *mul, *count3, *one, *mulaux, *count3aux;

	one = "1";
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
			else if (i == 1)
			count1++;
			else if (i == 2)
			count2++;
		}

	}
	mul = _calloc((count1 + count2 + 1), sizeof(char));
	mul[count1 + count2] = '\0';
	mulaux = _calloc((count1 + count2 + 1), sizeof(char));
	mulaux[count1 + count2] = '\0';
	count3 = _calloc((count2 + 1), sizeof(char));
	count3[count2] = '\0';
	count3aux = _calloc((count2 + 1), sizeof(char));
	count3aux[count2] = '\0';
	mulaux = _strcpy(mulaux, mul);
	while (_strcmp(argv[2], count3) != 0)
	{
		infinite_add(mul, argv[1], mulaux, (count1 + count2 + 1));
		mul = _strcpy(mul, mulaux);
		infinite_add(count3, one, count3aux, (count2 + 1));
		count3 = _strcpy(count3, count3aux);
	}
	_puts(mul);
return (0);
}

