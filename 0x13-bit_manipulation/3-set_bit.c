#include "holberton.h"
/**
  * _pow_recursion3 - returns the factorial of a given number.
  * @x: number base
  * @y:  power
  * Return: power
**/
unsigned long int _pow_recursion3(int x, unsigned int y)
{
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion3(x, y - 1) * x);
}
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: position to insert 1
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 32)
	return (-1);
	bit = _pow_recursion3(2, index);
	*n = *n | bit;
	return (1);
}

