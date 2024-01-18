#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory of size b
 * @b: size of the memory to allocate
 * Return: allocate memory if fail exist with 98
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
