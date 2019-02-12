#include "holberton.h"
/**
  * _abs - computes the absolute value of an integer.
  * @n: input integer
  * Return: absolute value
**/
int _abs(int n)
{
int abs;
	if (n >= 0)
	{
	abs = n;
	}
	else
	{
	abs = -n;
	}
return (abs);
}
