#include "main.h"
/**
* clear_bit - sets bit to 0.
* @n: Pointer unsigned long int.
* @index: Index of the bit
*
* Return: 1 if it worked, or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cast;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	cast = ~(1UL << index);
	*n = (*n & cast);
	return (1);
}
