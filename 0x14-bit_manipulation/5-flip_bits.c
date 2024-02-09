#include "main.h"
/**
 * flip_bits - number of bits needed to flip to get to certain.
 * @n: First unsigned long int
 * @m: Second unsigned long int
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_flip = n ^ m;
	unsigned int count = 0;

	while (xor_flip != 0)
	{
		count += xor_flip & 1;
		xor_flip >>= 1;
	}

	return (count);
}
