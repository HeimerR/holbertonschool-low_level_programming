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
	va_list list1, list2;
	unsigned int i;

	va_start(list1, n);

	for (i = 0; (i < n - 1); i++)
	{
	va_copy(list2, list1);
	if (va_arg(list2, const char*))
	{
		if (separator != NULL)
		printf("%s%s", va_arg(list1, char*), separator);
		else
		printf("%s", va_arg(list1, char*));
	}
	else
	{
		if (separator != NULL)
		printf("%p%s", va_arg(list1, char*), separator);
		else
		printf("%p", va_arg(list1, char*));
	}
	if (va_arg(list2, int))
	{ printf("%s\n", va_arg(list1, char*)); }
	else
	{ printf("%p\n", va_arg(list1, char*)); }
	}
	va_end(list2);
	va_end(list1);
}
