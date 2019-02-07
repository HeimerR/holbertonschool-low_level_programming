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

	for (number = '0'; number <= '8'; number++)
	{
	putchar(number);
	putchar(',');
	putchar(' ');
	}
	putchar('9');
printf("\n");
return (0);
}
