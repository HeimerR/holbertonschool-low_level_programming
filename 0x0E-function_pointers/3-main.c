#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - calculates  + - * / % for 2 nymbers
* @argc: number of arguments
* @argv: array of arguments
* Return: answer or error if no correct arguments
*/
int main(int argc, char *argv[])
{
	int answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*' || *argv[2] == '/'
		|| *argv[2] == '%')
	{
		answer =  (*get_op_func(argv[2]))((atoi(argv[1])), (atoi(argv[3])));
		printf("%d\n", answer);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
return (0);
}
