#include "search_algos.h"

/**
 * interpolation_search - Performs an interpolation search on a sorted array
 * @array: Pointer to the sorted array to search
 * @size: Size of the array
 * @value: The value to search for in the array
 *
 * Return: The index of the found value, or -1 if the value is not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		(array[pos] < value) ? (low = pos + 1) : (high = pos - 1);
	}
	return (-1);
}
