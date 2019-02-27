#include "holberton.h"
/**
  * prime - returns 1 if the input integer is a prime
  * @n1: base number
  * @n2: iteration
  * Return: boolean
**/
int prime(int n1, int n2)
{
if (n2 == 1)
return (1);
if (n1 % n2 == 0)
{
return (0);
}
return (prime(n1, n2 - 1));
}
/**
* is_prime_number - returns 1 if the input integer is a prime
* @n: number
* Return: boolean
*/
int is_prime_number(int n)
{
if (n < 0)
return (0);
if (n == 1)
return (0);
if (n == 2)
return (1);
return (prime(n, n - 1));
}
