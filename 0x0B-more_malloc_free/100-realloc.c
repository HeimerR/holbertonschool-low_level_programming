#include <stdlib.h>
/**
* _realloc - reallocates a memory block
* @ptr: initial pointer
* @old_size: initial size
* @new_size: new size
* Return: pointer to array
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
	clone = ptr;
	else
	{ clone = malloc(new_size);
		if (ptr == NULL)
		return (0);
		free(ptr);
	return (clone); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = clone[i];
	}
	free(ptr);
return (relloc);
}
