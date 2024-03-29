#include "main.h"
/**
* get_bit - gets the value of a bit to index.
* @n: Pointer unsigned long int.
* @index: Index of the bit
*
* Return: 1 if it worked, or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int  cast = 1UL << index;
	int b_val;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	b_val = (n & cast) ? 1 : 0;
	return (b_val);
}
