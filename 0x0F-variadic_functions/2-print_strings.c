#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints numbers, followed by a new line.
* @separator: delimiter
* @n: number of parameters
* Return: no return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list1;
	unsigned int i;
	char *clone;

	va_start(list1, n);

	for (i = 0; i < n; i++)
	{
		clone = va_arg(list1, char*);
		if (clone != NULL)
			printf("%s", clone);
		else
			printf("%p", clone);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list1);
}
