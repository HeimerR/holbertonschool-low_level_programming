#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the number of arguments passed into it.
* @argc: - # of parameters
* @argv: - array of parameters
* Return: no errros 0. error 1
*/
int main(int argc, char *argv[])
{
	int change = 0, n;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{ printf("0\n");
	return (0); }
	if (n >= 25)
	{ change = n / 25;
	n = n % 25; }
	if (n >= 10)
	{ change += n / 10;
	n = n % 10; }
	if (n >= 5)
	{ change += n / 5;
	n = n % 5; }
	if (n >= 2)
	{ change += n / 2;
	n = n % 2; }
	change += n;
	printf("%d\n", change);
return (0);
}
