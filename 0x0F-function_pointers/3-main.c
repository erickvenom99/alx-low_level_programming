#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int (*op_rate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_rate = get_op_func(argv[2]);

	if (!op_rate)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_rate(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
