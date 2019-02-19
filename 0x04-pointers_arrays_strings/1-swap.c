#include "holberton.h"
/**
  * swap_int - swap values
  * @a: input1
  * @b: input2
  * return: no return
**/
void swap_int(int *a, int *b)
{
int n, m;
n = *a;
m = *b;
*a = m;
*b = n;
}
