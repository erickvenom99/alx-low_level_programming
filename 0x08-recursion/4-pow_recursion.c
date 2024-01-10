#include "main.h"

/**
*  _pow_recursion - Returns value x and y
*@x: holds the value of x
*@y: holds the power y
* Return: Always 0 (Success)
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	_putchar('\n');
}
