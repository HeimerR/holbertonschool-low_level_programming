#include "holberton.h"
void times_table(void)
{
  int n1;
  int n2;
  int digit;
  int digit2;
  for (n1 = 0 ; n1 < 10; n1++)
    {
      for (n2 = 0; n2 < 10; n2++)  
	{
	  digit = n1*n2;
	  digit2= (n2+1)*n1;
          if (digit < 10)
            {
	      _putchar(digit + '0');
	    }
	  else
            {
              _putchar(digit/10 + '0');
	      _putchar(digit%10 + '0');
            } 
	  if (n2 == 9)
	    {
	     _putchar('\n');  	      
	    }
	  else 
	    {
             _putchar(',');
             _putchar(' ');
	     if ( digit2 <= 9)  
	       {	     
                _putchar(' ');            
                } 
            } 
         } 
    }
}
