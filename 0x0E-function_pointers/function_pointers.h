#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H
#define size_t int
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
#endif
