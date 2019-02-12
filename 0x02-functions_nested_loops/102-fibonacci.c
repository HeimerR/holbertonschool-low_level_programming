#include "holberton.h"
#include <stdio.h>
/**
 * main - fibonacci series (first 50)
 *
 * Return: 0
 **/
int main(void)
{
int i;
long n1 = 1;
long n2 = 2;
long n3;
printf("%ld, %ld, ", n1, n2);
	for (i = 3; i <= 50; i++)
	{
	if (i != 50)
	{
	n3 = n1 + n2;
	printf("%ld, ", n3);
	n1 = n2;
	n2 = n3;
	}
	else
	{
	n3 = n1 + n2;
	printf("%ld\n", n3);
	}
	}
return (0);
}

