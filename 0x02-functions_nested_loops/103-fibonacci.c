#include "holberton.h"
#include <stdio.h>
/**
 * main - fibonacci series (first 50)
 *
 * Return: 0
 **/
int main(void)
{
long n1 = 1;
long n2 = 2;
long n3 = 3;
long sum = 2;
	while (n3 < 4000000)
	{
	n3 = n1 + n2;
	n1 = n2;
	n2 = n3;
	if((n3 % 2) == 0)
	{
	sum = sum + n3;
	}
	}
printf("%ld\n", sum);
return (0);
}

