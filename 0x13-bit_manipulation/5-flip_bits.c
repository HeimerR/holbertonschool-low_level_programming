#include "holberton.h"
/**
 * flip_bits - check the code for Holberton School students.
 * @n: original number
 * @m: destiny number
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, nflips = 0;

	for (i = 1; i < 32; i++)
	{
	if ((m & 1) != (n & 1))
		nflips += 1;
	n = n >> 1;
	m = m >> 1;
	}
return (nflips);
}
