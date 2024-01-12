#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg_no = argc - 1;
	(void) argv;

	printf("%d\n", arg_no);
	return (0);
}
