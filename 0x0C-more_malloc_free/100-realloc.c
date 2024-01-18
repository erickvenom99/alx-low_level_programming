#include "main.h"
#include <stdlib.h>
/**
* _realloc - Reallocates memory block with a new size.
* @ptr: Pointer to the memory block to reallocate.
* @old_size: The current size of the memory block.
* @new_size: The new size of the memory block.
*
* Return: Pointer to the reallocated memory block.
*If new_size is 0 and ptr is not NULL, frees the memory block and returns NULL.
*If ptr is NULL, behaves like malloc(new_size).
*If new_size is equal to old_size, returns ptr without changes.
*If memory allocation fails, returns NULL.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size;
	unsigned int i;
	void *new_ptr;
	char *src;
	char *des;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	des = (char *)new_ptr;
	src = (char *)ptr;
	if (old_size < new_size)
	{
		min_size = old_size;
	}
	else
	{
		min_size = new_size;
	}
	for (i = 0; i < min_size; i++)
	{
		des[i] = src[i];
	}
	free(ptr);
	return (new_ptr);
}
