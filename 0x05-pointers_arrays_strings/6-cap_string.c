#include "holberton.h"
/**
  * cap_string - hanges all lowercase letters of a string to
  * @n: striing
  * Return: string
 **/
char *cap_string(char *n)
{
	int i = 0;
	int inside = 0;

	while (n[i] != '\0')
	{
	if ((n[i] < 91 && n[i] > 64) && inside == 0)
	{ inside = 1; }
	if ((n[i] < 58 && n[i] > 47) && inside == 0)
	{ inside = 1; }
	if ((n[i] < 123 && n[i] > 96) && inside == 0)
	{
	n[i] = (n[i] - 32);
	inside = 1;
	}
	switch (n[i])
	{
	case 32:
	case 9:
	case 10:
	case 44:
	case 59:
	case 46:
	case 33:
	case 63:
	case 34:
	case 40:
	case 41:
	case 123:
	case 125:
	inside = 0;
	}
	i++;
	}
return (n);
}
