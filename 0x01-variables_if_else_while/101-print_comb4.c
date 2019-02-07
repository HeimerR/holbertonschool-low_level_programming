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
int number3;
	for (number = '0'; number <= '9'; number++)
	{
		for (number2 = '0'; number2 <= '9'; number2++)
		{
			for (number3 = '0'; number3 <= '9'; number3++)
			{
			if (((number < number2) && (number2 < number3)) && ((number != number2) && (number2 != number3)))
			{
			putchar(number);
			putchar(number2);
			putchar(number3);
			if (number == '7' && number2 == '8' && number3 == '9' )
			{
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
			}
			}
		}
	}
printf("\n");
return (0);
}
