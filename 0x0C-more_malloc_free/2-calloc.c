#include "main.h"
#include "stdlib.h"
/**
 * _calloc - Allocates and initializes memory for an array.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: Pointer to the allocated and initialized memory block.
 *         If nmemb or size is 0, or if memory allocation fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;
	unsigned char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	pointer = arr;
	for (i = 0; i < (nmemb * size); i++)
		pointer[i] = 0;

	return (arr);
}
