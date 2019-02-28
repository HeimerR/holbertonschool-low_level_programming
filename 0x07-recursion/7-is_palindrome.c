#include "holberton.h"
/**
  * _strlen_recursion - lenght
  * @s: char
  * Return: lenght
**/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
/**
* comp - compares
* @s: char
* @start: start point
* @end: end point
* Return: boolean
**/

int comp(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
return (0);
if (start < end)
return (comp(s, start + 1, end  - 1));
return (1);
}
/**
* is_palindrome - returns 1 if is palindrome
* @s: char
* Return: boolean
*/
int is_palindrome(char *s)
{
char *aux;
int size;
int start = 0;
int end;
aux = s;
size = _strlen_recursion(aux);
end = size - 1;
return (comp(s, start, end));
}

