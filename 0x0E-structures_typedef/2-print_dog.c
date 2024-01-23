#include "dog.h"
#include <stdio.h>
/**
 * print_dog - content of struct
 * @d: Pointer to the dog structure
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
		return;
	}
	if (d->name == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
