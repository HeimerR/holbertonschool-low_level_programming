#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
* _strcpy - copies the string pointed to
* @dest: destination array
* @src: input string
* Return: string
 **/
char *_strcpy(char *dest, char *src)
{
	int i = 0, length = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	length = i;
	for (i = 0; i < length && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i <= length; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
/**
* new_dog - check the code for Holberton School students.
* @name: name's dog
* @age: age's dog
* @owner: owner's dog
* Return: new dog pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(sizeof(*name));
	if (new == NULL)
		return (NULL);
	_strcpy(new->name, name);
	new->age = age;
	new->owner = malloc(sizeof(*owner));
	if (new == NULL)
		return (NULL);
	_strcpy(new->owner, owner);
return (new);
}
