#include "holberton.h"
/**
  * _atoi- convert a string to an integer.
  * @s: string input
  * Return: int number
**/
int _atoi(char *s)
{
	int size = 0, negatives = 0, p = 1, j, start = 0, end;
	unsigned int number = 0;
	int number2 = 0;
	while (s[size] != '\0')
	{
	size++;
	}
	while (s[start] < 48 || s[start] > 57)
	{
	start++;
		if (start == size)
		{
		return (number2);
		}
	}
	end = start;
	while (s[end + 1] > 47 && s[end + 1] < 58)
	{
	end++;
	}
	for (j = 0; j < start; j++)
	{
	if (s[j] == 45)
	{ negatives++; }
	}
	for (j = end; j >= start; j--)
	{
	number = number + (s[j] - '0') * p;
	if (p < 1000000000)
	{ p = p * 10; }
	}
	number2 = number;
	if (negatives % 2 != 0)
	{ 
	number2 = -number2;
	}
return (number2);
}
