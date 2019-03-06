#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of your program
* @ac: size
* @av: array arguments
* Return: double pointer
*/

char *argstostr(int ac, char **av)
{
	int i = 0, k = 0, count = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (0);
	while (i < ac)
	{
	k = 0;
	while (av[i][k] != '\0')
	{
		count++;
		k++;
	}
	i++;
	}
	s = malloc((count + ac + 1) * sizeof(char));
	if (s == '\0')
	return (0);
	i = 0;
	count = 0;
	while (i < ac)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			s[count] = av[i][k];
			k++;
			count++;
		}
		s[count] = 10;
		count++;
		k++;
		i++;
	}
return (s);
}
