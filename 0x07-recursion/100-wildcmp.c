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

int comp(char *s1, char *s2, int start1, int start2, int end1, int end2)
{
if (start1 == end1 && start2 == end2)
{
return (1);
}
if ((s1[start1] != s2[start2]) && s1[start1] != 42 && s2[start2] != 42)
return (0);
if (start1 < end1 && start2 < end2)
return (comp(s1, s2,  start1 + 1, start2 + 1,  end1, end2));
return (1);
}
/**
* wildcmp - 1 if the strings can be considered identical
* @s1: char 1 
* @s2: char 2
* Return: Boolean
*/
int wildcmp(char *s1, char *s2)
{
char *aux;
int size1;
int size2;
int start1 = 0, start2 = 0;
int end1, end2;
aux = s1;
size1 = _strlen_recursion(aux);
aux = s2;
size2 = _strlen_recursion(aux);
end1 = size1 - 1;
end2 = size2 - 1;
return (comp(s1, s2, start1, start2, end1, end2));
}

