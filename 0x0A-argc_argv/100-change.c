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
	int count, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	count = atoi(argv[1]);
	result = 0;
	if (count < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && count >= 0; j++)
	{
		while (count >= coins[j])
		{
			result++;
			count -= coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
