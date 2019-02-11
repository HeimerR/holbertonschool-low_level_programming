#include "holberton.h"
int _islower(int c)
{
  char letter;
 int value = 0;
     for (letter = 'a'; letter <= 'z'; letter++)
       {
	 if ( letter == c )
	   {
	   value = 1;
	   }
       }
 
 return(value);
}
