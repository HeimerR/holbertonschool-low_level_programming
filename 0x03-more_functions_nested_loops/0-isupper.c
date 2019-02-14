#include "holberton.h"
/**
  * _isupper - return 1 when is uppercase
  * @c: input charater
  * Return: if is upper return is 1
  *
**/
int _isupper(int c)
{
if (c > 64 && c  < 91)
{
return (1);
}
else
{
return (0);
}
}

