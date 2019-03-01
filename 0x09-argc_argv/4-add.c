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
	int sum = 0, n, i;

	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == 48)
		{
		n = 0;
		}
		else
		{
			if (atoi(argv[i]) == 0)
			{ printf("Error\n");
			return (1); }
			n = atoi(argv[i]);
			sum += n;
		}
	}
	printf("%d\n", sum);
return (0);
}
