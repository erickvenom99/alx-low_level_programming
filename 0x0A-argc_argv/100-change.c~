#include <stdio.h>
#include <stdlib.h>
/**
 *main - Find the number of coins
 *@argc: -Argument counter
 *@argv: Arguemnt Vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	i += cents / 25;
	cents %= 25;

	i += cents / 10;
	cents %= 10;

	i += cents / 5;
	cents %= 5;

	i += cents / 2;
	cents %= 2;

	i += cents;

	printf("%d\n", i);

	return (0);
}
