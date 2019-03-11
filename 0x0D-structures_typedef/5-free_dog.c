#include "dog.h"
#include <stdlib.h>
/**
* free_dog - let the dogs out
* @d: pointer to dog
* Return: no return
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	free(d);
}
