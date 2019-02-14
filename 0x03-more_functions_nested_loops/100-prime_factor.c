#include <stdio.h>
/**
  * main - prints the lasrgest prime factor of 612852475143
  * Return: 0
**/
int main(void)
{
	long num = 612852475143;
	long i;

	for (i = 1; i < num; i++)
	{
	if (num % i == 0)
	{
	num = num / i;
	}
	}
	printf("%li\n", num);
return (0);
}

