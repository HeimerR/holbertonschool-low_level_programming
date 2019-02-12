#include "holberton.h"
#include <stdio.h>
void print_to_98(int n)
{
  int i;
  if (n < 98)
    {
      for( i = n; i < 98; i++)
	{
          
	  printf("%d,  ", i);  

	}  

    }

  if (n > 98)
    {
      for ( i = n ; i > 98; i--)    
	{
	  printf("%d, ", i);
        }

 
    }
 
  printf("98\n");

}
