#include "function_pointers.h"
#include <stdio.h>
/**
*print_name -Print name
*@name: an array
*@f: funtion pointer
*
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	(f)(name);
}
