#include "search_algos.h"

/**
 * binary_search - Performs a binary search on a sorted array
 * @array: Pointer to the array to search
 * @size: Size of the array
 * @value: The value to search for in the array
 *
 * Return: Index of the found value, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0;
	unsigned int right = size - 1;
	unsigned int mid, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
