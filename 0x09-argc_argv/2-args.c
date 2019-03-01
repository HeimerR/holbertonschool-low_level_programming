#include <stdio.h>
/**
* main - prints the number of arguments passed into it.
* @argc: - # of parameters
* @argv: - array of parameters
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
