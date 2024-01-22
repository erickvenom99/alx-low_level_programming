#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - dog structure initialization
 * @d: Pointer to the dog structure
 * @name: Dog name
 * @age:Dog age
 * @owner: Owners name
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
