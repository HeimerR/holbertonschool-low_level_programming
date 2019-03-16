#include "variadic_functions.h"
/**
* print_numbers - prints numbers, followed by a new line.
* @separator: delimiter
* @n: number of parameters
* Return: no return
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
if (n != 0)
{
	for (i = 0; (i < n - 1); i++)
	{
		if (separator != NULL)
		{
		printf("%d%s", va_arg(list, int), separator);
		}
		else
		{
		printf("%d", va_arg(list, int));
		}
	}
	printf("%d", va_arg(list, int));
	va_end(list);
}
printf("\n");
}

