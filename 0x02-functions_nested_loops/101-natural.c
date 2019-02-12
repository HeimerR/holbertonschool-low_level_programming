#include "holberton.h"
#include <stdio.h>
/**
 * main - sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 **/
int main(void)
{
int n;
int result = 0;
	for (n = 3; n < 1024; n++)
	{
	if ((n % 3) == 0 || (n % 5) == 0)
	{
	result = result + n;
	}
	}
	printf("%d\n", result);
return (0);
}
