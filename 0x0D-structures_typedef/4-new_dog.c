#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
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
	strcpy(new->name, name);
	new->age = age;
	new->owner = malloc(sizeof(*owner));
	strcpy(new->owner, owner);
return (new);
}
