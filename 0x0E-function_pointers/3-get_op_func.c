#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* get_op_func - check if a number is equal to 98
* @s: the integer to check
*
* Return: result
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && ops[i].f != NULL)
	{
		if (strcmp((ops[i].op), s) == 0)
		{
		return (ops[i].f);
		}
	i++;
	}
	printf("Error\n");
	exit(99);
return (0);
}
