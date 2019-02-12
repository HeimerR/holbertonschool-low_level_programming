#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - show the absolute value of a number
 * @n: number to check
 *
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i < 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i > 98)
{
printf(", ");
}
}
}
printf("\n");
}
