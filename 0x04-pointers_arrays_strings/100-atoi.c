#include "holberton.h"
/**
  * _atoi- convert a string to an integer.
  * @s: string input
  * Return: int number
**/
int _atoi(char *s)
{
int size = 0, negatives = 0, p = 1;
int j, number = 0, start = 0, end;
while (s[size] != '\0')
{
size++;
}
while (s[start] < 48 || s[start] > 57)
{
start++;
	if(start == size)
	{
	return (0);
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
p = p * 10;
}
if (negatives % 2 != 0)
{ number = -number; }
return (number);
}
