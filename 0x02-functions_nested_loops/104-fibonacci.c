#include "holberton.h"
#include <stdio.h>
/**
 * main - fibonacci series (first 98)
 *
 * Return: 0
 **/
int main(void)
{
int i;
unsigned long n1 = 1;
unsigned long n2 = 2;
unsigned long n3 = 3;
unsigned long n1up;
unsigned long n1dw;
unsigned long n2up;
unsigned long n2dw;
unsigned long sum_up;
unsigned long sum_dw;
printf("%lu, %lu, ", n1, n2);
	for (i = 3; i <= 92; i++)
	{
	n3 = n1 + n2;
	n1 = n2;
	n2 = n3;
	printf("%lu, ", n3);
	}
	n1up = n1 / 1000000000;
	n1dw = n1 % 1000000000;
	n2up = n2 / 1000000000;
	n2dw = n2 % 1000000000;
	for (i = 93; i <= 98; i++)
	{
	sum_up = n1up + n2up;
	sum_dw = n1dw + n2dw;
	if (i == 95 || i == 96 || i == 97 || i == 98)
	{ sum_up = sum_up + 1;
	sum_dw = sum_dw % 1000000000; }
	if (i == 98)
	{ printf("%lu%lu\n", sum_up, sum_dw); }
	else
	{ printf("%lu%lu, ", sum_up, sum_dw);
	n1up = n2up;
	n1dw = n2dw;
	n2up = sum_up;
	n2dw = sum_dw; }
	}
return (0);
}

