#include "main.h"
/**
 *is_prime_number- Returns if number is prime
 *@n: the number to be checker
 *
 *Return: integer Value
 */

int is_prime_number(int n)
{
	return (is_prime_asst(n, 2));
}

/**
 *is_prime_asst - Check if number is prime
 *@n: the number to be checked
 *@divisor: the divisor
 *
 *Return: 1 for prime or 0 composite
 */
int is_prime_asst(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_asst(n, divisor + 1));
}
