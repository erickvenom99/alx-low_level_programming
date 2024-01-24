#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two integers
 *@a: integer
 *@b: interger
 *Return: sum of two int
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 *op_sub- subtract of two integers
 *@a: integer
 *@b: interger
 *Return: integer value
 */
int op_sub(int a, int b)
{

	return (a - b);

}
/**
 *op_mul- Multiply two integers
 *@a: integer
 *@b: interger
 *Return:  integer value
 */
int op_mul(int a, int b)
{

	return  (a * b);

}
/**
*op_div- divid two integers
*@a: integer
*@b: interger
*Return: integer value
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
*op_mod- Modulus two numbers
*@a: integer
*@b: interger
*Return: integer value
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return  (a % b);
}
