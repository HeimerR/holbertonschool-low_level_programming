#include "holberton.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: No return 0.
 */
int get_endianness(void)
{
	int aux = 255;
	int *tester;
	char *step;

	tester = &aux;
	step = (char *)tester;
	if (*step ==  0)
	return (0);
	return (1);
}
