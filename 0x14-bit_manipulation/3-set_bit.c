#include "main.h"
/**
* set_bit - Sets the value of a bit to index.
* @n: Pointer unsigned long int.
* @index: Index of the bit
*
* Return: 1 if it worked, or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cast = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= cast;
	return (1);
}
