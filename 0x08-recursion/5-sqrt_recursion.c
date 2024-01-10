#include "main.h"

/**
* supp_func -Finds the sqare root
* @num: value of square
* @root: value of number
*
* Return: num and root
*/

int supp_func(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}
	else
		return (supp_func(num, root + 1));

}

/**
* _sqrt_recursion-Returns the natural square root of numbers
* @n: value of the number
*
* Return: 0
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (supp_func(n, 0));
}
