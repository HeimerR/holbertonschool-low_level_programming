#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_c - print char
*
* @s: va_list
*/
void print_c(va_list s)
{
	printf("%c", va_arg(s, int));
}
/**
* print_i - print integer
*
* @s: va_list
*/
void print_i(va_list s)
{
	printf("%i", va_arg(s, int));
}
/**
* print_f - print float
*
* @s: va_list
*/
void print_f(va_list s)
{
	printf("%f", va_arg(s, double));
}
/**
* print_s - print string
*
* @s: va_list
*/
void print_s(va_list s)
{
	va_list clone;

	va_copy(clone, s);
	if (va_arg(clone, char*) == '\0')
	{
	printf("%p", va_arg(s, char*));
	}
	else
	{
	printf("%s", va_arg(s, char*));
	}
}
/**
* print_all - print char, integer, float and string
*
* @format: format
*/
void print_all(const char * const format, ...)
{

	va_list list1;
	unsigned int i = 0, j = 0;
	my_fmt fmts[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{'\0', '\0'}
	};

	va_start(list1, format);
	while (format[j] != '\0')
	{
		i = 0;
		while (fmts[i].f != '\0')
		{
			if (*(fmts[i].f) == format[j])
			{
				fmts[i].p(list1);
				if (format[j + 1] == '\0')
				{
					printf("\n");
				}
				else
				{
					printf(", ");
				}
			}
			i++;
		}
		j++;
	}
}
