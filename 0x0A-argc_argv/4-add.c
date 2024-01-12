#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * add_positive_numbers - Function add positive numbers
 *@argc: number of arguments
 *@argv: Array of argument
 *
 * Return: sum or 0 if no number
 */
int add_positive_numbers(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *number = argv[i];

		while (*number)
		{
			if (!isdigit(*number))
			{
				printf("Error\n");
				return (1);
			}
			number++;
		}
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
	}
	return (sum);
}


/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: Array of arguments
 *
 * Return: Alway 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int result = add_positive_numbers(argc, argv);

		if (result == 1)
		{
			return (1);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
