#include "holberton.h"
/**
  * _islower - checks lower case characters
  * @c: input character
  * Return: boolean value
**/
int _islower(int c)
{
char letter;
int value = 0;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
		{
		value = 1;
		}
	}
return (value);
}
