#include "holberton.h"
/**
  * issqr - find if it is a root
  * @n1: number to check
  * @n2: number base
  * Return: square or -1
**/
int issqr(unsigned long long n1, unsigned long long n2)
{
if (n1 == n2)
{ return (-1); }
if (n1 * n1 == n2)
{
return (n1);
}
else
{
return (issqr((n1 + 1), n2));
}
return (-1);
}
/**
* _sqrt_recursion - returns the natural square root
* @n: number
* Return: squre root
**/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n < 0 || n == 2)
return (-1);
if (n == 1)
return (1);
return (issqr(2, n));
}
