#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array based on a given condition.
 * @array: Pointer to the beginning of the integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: The index of the first element for which the comparison function
 *         does not return 0. If no such element is found, -1 is returned.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
			return (j);
		}
	}

	return (-1);
}
