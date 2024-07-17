#include "search_algos.h"
/**
 * linear_search - Search for a values in array
 * @array: Pointer to the array to search
 * @size: Size of the array
 * @value: The searched value
 *
 * Return: Index of the found value, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int k;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%d] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}
	return (-1);
}
