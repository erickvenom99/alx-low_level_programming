#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program mutilply two argument
 *@argc: number of arguments
 *@argv: contains or argument
 *
 * Return: Alway 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int count1 = atoi(argv[1]);
		int count2 = atoi(argv[2]);
		int result = count1 * count2;

		printf("%d", result);
	}
	printf("\n");
	return (0);
}
