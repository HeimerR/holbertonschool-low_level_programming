#include "holberton.h"
int _isalpha(int c)
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
     for (letter = 'A'; letter <= 'Z'; letter++)
       {
         if ( letter == c )
           {
	     value = 1;
           }
       }
 return(value);
}
