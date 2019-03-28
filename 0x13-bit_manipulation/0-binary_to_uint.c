#include "holberton.h"
/**
  * _pow_recursion - power function
  * @x: number base
  * @y:  power
  * Return: power
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
	return (1);
	}
return (_pow_recursion(x, y - 1) * x);
}
/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: char binary input
 * Return: unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0;
	int i, pwr;
	unsigned int decimal = 0;

	if (b)
	{
		while (b[length])
		{
			if (b[length] != 48 && b[length] != 49)
			return (0);
			length++;
		}
		i = length - 1;
		while (i >= 0)
		{
		pwr = _pow_recursion(2, length - i - 1);
		decimal += (b[i] - '0') * pwr;
		i--;
		}
	}
	return (decimal);
}
