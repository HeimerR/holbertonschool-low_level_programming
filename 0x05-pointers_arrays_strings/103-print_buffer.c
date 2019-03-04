#include "holberton.h"
#include <stdio.h>
/**
  * print_buffer - prints a buffer
  * @b: buffer
  * @size: buffer size
  * Return: no return
**/
void print_buffer(char *b, int size)
{
	int i, j, n, hex = 0;

	for (i = 0; i < size; i = i + 10)
	{
		printf("%08x: ", hex);
		for (n = hex; n < (hex + 10); n += 2)
		{
			if (n == size - 1)
			{ printf("%02x   ",  b[n]); }
			else if (n < size)
			{ printf("%02x%02x ",  b[n], b[n + 1]); }
			else
			{ printf("     "); }
		}
		for (j = i; j < i + 10; j++)
		{
			if (b[j] < 32 || b[j] > 126)
			{ b[j] = '.'; }
			if (j < size)
			{ printf("%c", b[j]); }
		}
		printf("\n");
		hex += 10;
	}
	if (size <= 0)
	{ printf("\n"); }
}
