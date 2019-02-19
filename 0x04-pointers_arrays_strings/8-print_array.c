#include <stdio.h>
/**
  * print_array - prints one char out of 2
  * @a: pointer array
  * @n: array positions
  * Return: no return
**/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
}
