#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
/**
* struct fmt - Struct format
*
* @f: type format
* @p: print function
*/
typedef struct fmt
{
	char *f;
	void (*p)(va_list s);
} my_fmt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _strlen_recursion(char *s);
void print_c(va_list s);
void print_i(va_list s);
void print_f(va_list s);
void print_s(va_list s);
#endif
