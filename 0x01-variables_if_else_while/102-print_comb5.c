#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number1;
int number2;
int number3;
int number4;
int counter1 = 0;
int counter2 = 0;

	for (number1 = '0'; number1 <= '9'; number1++)
	{
		for (number2 = '0'; number2 <= '9'; number2++)
		{
			for (number3 = '0'; number3 <= '9'; number3++)
			{
				for (number4 = '0'; number4 <= '9'; number4++)
				{
					if (counter1 > counter2)
					{
					putchar(number1);
					putchar(number2);
					putchar(' ');
					putchar(number3);
					putchar(number4);
					if (counter1 ==	99 && counter2 == 98)
					{
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				counter1++;
				}
			}
		counter1 = 0;
		counter2++;
		}
	}
printf("\n");
return (0);
}
