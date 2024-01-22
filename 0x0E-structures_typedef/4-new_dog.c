#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Create a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 *
 * Return: Pointer to the newly created dog structure
 *         or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLength = strlen(name);
	int ownerLength = strlen(owner);
	dog_t *red_dog = malloc(sizeof(dog_t));

	if (red_dog == NULL)
		return (NULL);

	red_dog->name = malloc(nameLength + 1);
	red_dog->owner = malloc(ownerLength + 1);
	if (red_dog->name == NULL || red_dog->owner == NULL)
	{
		free(red_dog->name);
		free(red_dog->owner);
		free(red_dog);
		return (NULL);
	}

	strncpy(red_dog->name, name, nameLength);
	red_dog->name[nameLength] = '\0';
	strncpy(red_dog->owner, owner, ownerLength);
	red_dog->owner[ownerLength] = '\0';

	red_dog->age = age;

	return (red_dog);
}
