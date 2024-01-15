#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all arguments into a single string
 * @ac: argument count
 * @av: arguments in command line
 * Return: concatenated string or NULL
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	char *arr;
	int k;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	arr = malloc((total_length + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			arr[k] = av[i][j];
			k++;
			j++;
		}
		arr[k] = '\n';
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
