#include "holberton.h"
/**
  * factorial - returns the factorial of a given number.
  * @n: given number
  * Return: factorial
  *
**/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (factorial(n - 1) * n);
}
