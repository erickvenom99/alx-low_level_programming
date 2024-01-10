#include "main.h"

/**
 *  factorial -  Prints the factorial of a number.
 *@n: holds the strings
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	_putchar('\n');
}
