#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free memory allocated
 * @d: Pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
