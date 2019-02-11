#include "holberton.h"
int print_sign(int n)
{

 int value = 0;
 if (n > 0)
   {
     value = 1;
     _putchar('+');
   }
 if (n == 0)
   {
     value = 0;
     _putchar('0');
   }
 if (n < 0) 
   {
     value = -1;
     _putchar('-');
   } 
 return(value);
}
