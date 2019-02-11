#include "holberton.h"
int print_last_digit(int n)
{
  int d;
  if (n < 0)
  {
    n = -n;
  }
  d = n % 10;
  _putchar(d + '0');
 return(d);
}
