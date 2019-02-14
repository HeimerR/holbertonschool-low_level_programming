#include "holberton.h"
#include <stdio.h>
/**
  * _isdigit - return 1 when is a digit
  * @c: input digit
  * Return: if is digit return is 1
  *
**/
int _isdigit(int c)
{
if (c > 47 && c  < 58)
{
return (1);
}
else
{
return (0);
}
}

