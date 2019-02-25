#include "holberton.h"
/**
* _strstr - locates a substring
* @haystack: input array
* @needle: bytes to accept
* Return: char pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, flag;
	char *aux;

	aux = haystack;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			flag = 1;
			for (j = 1; needle[j] != '\0' && flag == 1; j++)
			{
				if (needle[j] == haystack[i + j])
				{
				}
				else
				{
				flag = 0;
				}

			}
		}
		if (needle[j] == '\0')
		{ return(aux); }
		aux++;
	}
return (0);
}
