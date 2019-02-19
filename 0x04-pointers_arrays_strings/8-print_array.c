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
for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
printf("\n");
}
