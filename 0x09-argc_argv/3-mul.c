#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the number of arguments passed into it.
* @argc: - # of parameters
* @argv: - array of parameters
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int mult, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;
	printf("%d\n", mult);
return (0);
}
