#include "main.h"
/**
 * print_binary - Print binary numbers
 * @n: unsigned long int to be converted
 *
 * Return: vod
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
