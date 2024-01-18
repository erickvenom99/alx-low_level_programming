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
	char *pointer;
	unsigned int i;
	unsigned int n_size = new_size;
	char *old_ptr = ptr;

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		return (pointer);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);

	if (new_size > old_size)
		n_size = old_size;

	for (i = 0; i < n_size; i++)
		pointer[i] = old_ptr[i];

	free(ptr);
	return (pointer);
}
