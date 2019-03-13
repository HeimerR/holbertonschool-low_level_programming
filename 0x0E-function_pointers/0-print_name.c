#include "function_pointers.h"
/**
* print_name - prints a name
* @name: name of the person
* @f: funtion that prints
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (f)
f(name);
}
