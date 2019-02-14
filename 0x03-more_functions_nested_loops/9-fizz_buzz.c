#include <stdio.h>
/**
  * main - prints the numbers from 1 to 100
  * followed by a new line. But for multiples of 3
  * print Fizz instead of the number
  * and for the multiples of five print Buzz
  * For numbers which are multiples of both FizzBuzz.
  * Return: 0
**/
int main(void)
{
	int i, c;

	for (i = 1; i < 100; i++)
	{
	if ((i % 3) == 0)
	{
	printf("Fizz ");
	}
	else if ((i % 5) == 0)
	{
	printf("Buzz ");
	}
	else if (((i % 5) == 0) && ((i % 3) == 0))
	{
	printf("FizzBuzz ");
	}
	else
	{
	printf("%d ", i);
	}
	}
printf("Buzz\n");
return (0);
}

