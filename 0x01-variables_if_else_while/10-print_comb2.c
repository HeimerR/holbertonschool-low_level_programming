#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number;
int number2;
	for (number = '0'; number <= '9'; number++)
	{
		for (number2 = '0'; number2 <= '9'; number2++)
		{
		putchar(number);
		putchar(number2);
		if (number == '9' && number2 == '9')
		{
		}
		else 
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
printf("\n");
return (0);
}
