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
printf("Name: %s\n", ((*d).name != NULL) ? (*d).name : "(nil)");
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n",  ((*d).owner != NULL) ? (*d).owner : "(nil)");
}
