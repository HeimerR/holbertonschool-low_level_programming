#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - sum of all its parameters.
* @n: numnber of parameters
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list;

	if (n)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}
		va_end(list);
	}
	return (sum);
}
