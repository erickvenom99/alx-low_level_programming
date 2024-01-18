#include "main.h"
#include <stdlib.h>
/**
* array_range - Creates an array of integers.
* @min: The minimum value of the range.
* @max: The maximum value of the range.
*
* Return: Pointer to the newly created array.
* If min is greater than max or if memory allocation fails, returns NULL
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
