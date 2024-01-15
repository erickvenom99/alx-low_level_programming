#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function copy string given as a parameter
 * @str: A copy of a string
 * Description: Allocate memory to a copied string
 * Return: pointer to array, NULL if fail
 *
 */

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *arry;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	arry = malloc((size + 1) * sizeof(char));
	if (arry == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arry[i] = str[i];
	}
	arry[size] = '\0';

	return (arry);
}
