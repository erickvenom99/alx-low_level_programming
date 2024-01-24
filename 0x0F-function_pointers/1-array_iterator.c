#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator- Loops over element of integer
 *@array:Pointer to the integer array
 *@size: size of the array
 *@action: A function pointer
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
